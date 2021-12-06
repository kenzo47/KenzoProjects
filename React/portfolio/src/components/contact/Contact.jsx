import React from 'react';
import { useContext, useRef, useState } from "react";
import "./contact.css";
import Phone from "../../img/phone.png";
import Email from "../../img/email.png";
import Address from "../../img/address.png";
import emailjs from "emailjs-com";
import { ThemeContext } from '../../context';

const Contact = () => {
    const formReference = useRef()
    const [done, setDone] = useState(false)
    const theme = useContext(ThemeContext);
    const darkMode = theme.state.darkMode;

    const handleSubmit = (e)=>{
        e.preventDefault();
        emailjs.sendForm('service_zuyvfup', 'template_ad1xeob', formReference.current, 'user_m861r7r6vLbcoIYS3vJuI')
        .then((result) => {
            console.log(result.text);
            setDone(true)
        }, (error) => {
            console.log(error.text);
        });
    }

    return (
        <div className="contact">
            <div className="contact-background"></div>
            <div className="contact-wrapper">
                <div className="contact-left">
                    <h1 className="contact-title">Let's discuss your project</h1>
                    <p className="contact-info">
                        <div className="contact-info-item">
                            <img src={Phone} alt="Phone icon" className="contact-info-item-icon" />
                        +32494356021
                        </div>
                        <div className="contact-info-item">
                            <img src={Email} alt="Email icon" className="contact-info-item-icon" />
                        info@kenzo47.dev
                        </div>
                        <div className="contact-info-item">
                            <img src={Address} alt="Address icon" className="contact-info-item-icon" />
                        Bruh street 4 bus 47, 3700 Tongeren, Belgium
                        </div>
                    </p>
                </div>
                <div className="contact-right">
                    <p className="contact-description">
                        <b>What's your story?</b> Get in touch.
                        <br/>
                        I'm always available for freelancing.
                    </p>
                    <form ref={formReference} onSubmit={handleSubmit}>
                    <input style={{backgroundColor: darkMode && "#333"}} type="text" placeholder="Subject" name="user_subject"/>
                    <input style={{backgroundColor: darkMode && "#333"}} type="text" placeholder="Email" name="user_email"/>
                    <input style={{backgroundColor: darkMode && "#333"}} type="text" placeholder="Name" name="user_name"/>
                    <textarea style={{backgroundColor: darkMode && "#333"}} rows="5" placeholder="Message" name="message"/>
                    <button>Submit</button>
                    {done && "Email sent succesfully."}
                    </form>
                </div>
            </div>
        </div>
    )
}

export default Contact
