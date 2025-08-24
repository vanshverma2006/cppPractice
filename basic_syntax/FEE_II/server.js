const express = require('express');
const nodemailer = require('nodemailer');
const bodyParser = require('body-parser');
const cors = require('cors');

const app = express();
app.use(cors());
app.use(bodyParser.json());

const otpStore = {}; // In-memory store for OTPs (for demo only)

const transporter = nodemailer.createTransport({
    service: 'gmail',
    auth: {
        user: 'YOUR_EMAIL@gmail.com',    // Replace with your email
        pass: 'YOUR_APP_PASSWORD'        // Use App Password, not your real password!
    }
});

function generateOtp() {
    return Math.floor(100000 + Math.random() * 900000).toString();
}

app.post('/send-otp', async (req, res) => {
    const { email } = req.body;
    if (!email) return res.json({ success: false, message: 'Email required' });

    const otp = generateOtp();
    otpStore[email] = otp;

    try {
        await transporter.sendMail({
            from: '"Caged Coder" <YOUR_EMAIL@gmail.com>',
            to: email,
            subject: 'Your OTP Code',
            text: `Your OTP code is: ${otp}`
        });
        res.json({ success: true });
    } catch (err) {
        res.json({ success: false, message: 'Failed to send email' });
    }
});

// Optional: Endpoint to verify OTP
app.post('/verify-otp', (req, res) => {
    const { email, otp } = req.body;
    if (otpStore[email] === otp) {
        delete otpStore[email];
        return res.json({ success: true });
    }
    res.json({ success: false, message: 'Invalid OTP' });
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => console.log(`Server running on port ${PORT}`));
 