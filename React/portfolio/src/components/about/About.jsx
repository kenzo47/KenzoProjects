import React from 'react'
import "./about.css"
import Photograph from "../../img/photograph.png"


const About = () => {
    return (
        <div className="about">
            <div className="about-left">
                <div className="about-card background"></div>
                <div className="about-card">
                    <img src="https://images.pexels.com/photos/3585047/pexels-photo-3585047.jpeg?auto=compress&cs=tinysrgb&dpr=2&w=500" alt="" className="about-image" />
                </div>
                <div class="scroll-down svg" id="home-scroll-down">
                <svg version="1.1" id="Layer_2" x="0px" y="0px" viewBox="0 0 25.166666 37.8704414" enable-background="new 0 0 25.166666 37.8704414" className="intro-scroll-svg">
                    <path class="stroke" fill="none" stroke="#c7c4b8" stroke-width="2.5" stroke-miterlimit="10" d="M12.5833445 36.6204414h-0.0000229C6.3499947 36.6204414 1.25 31.5204487 1.25 25.2871208V12.5833216C1.25 6.3499947 6.3499951 1.25 12.5833216 1.25h0.0000229c6.2333269 0 11.3333216 5.0999947 11.3333216 11.3333216v12.7037992C23.916666 31.5204487 18.8166714 36.6204414 12.5833445 36.6204414z"></path>
                    <path class="scroller" fill="#c7c4b8" d="M13.0833359 19.2157116h-0.9192753c-1.0999985 0-1.9999971-0.8999996-1.9999971-1.9999981v-5.428606c0-1.0999994 0.8999987-1.9999981 1.9999971-1.9999981h0.9192753c1.0999985 0 1.9999981 0.8999987 1.9999981 1.9999981v5.428606C15.083334 18.315712 14.1833344 19.2157116 13.0833359 19.2157116z"></path>
                </svg>
                <i class="icon icon-arrow-down"></i>
                </div>
            </div>
            <div className="about-right">
                <h1 className="about-title">About Me</h1>
                <p className="about-subtitle">
                    It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout.
                </p>
                <p className="about-description">
                    Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer lobortis mollis lacus non tincidunt. Vestibulum quis iaculis odio. Nulla sed orci facilisis, luctus nisi vel, vehicula dolor. Nam viverra felis massa, id tincidunt nisl varius eu. Phasellus tempor turpis sed fermentum tincidunt. Fusce non tellus ultricies, varius purus id, lacinia odio. Sed volutpat eros nec vulputate tincidunt. Mauris euismod, urna a pharetra consectetur, dui lacus convallis lectus, sit amet aliquam est elit eget ipsum. Fusce non molestie dui.
                </p>
                <div className="about-award">
                    <img src="https://www.elitium.io/wp-content/uploads/2021/03/eum-homepage-pay-i14-e1617089851440.png" alt="" className="about-award-image" />
                    <div className="about-award-text">
                        <h4 className="about-award-title">Elitium Award</h4>
                        <p className="about-award-description">
                        Magna etiam tempor orci eu lobortis elementum. Non nisi est sit amet facilisis magna etiam tempor orci. Viverra orci sagittis eu volutpat odio facilisis.
                        </p>
                    </div>
                </div>
            </div>

        </div>
    )
}

export default About
