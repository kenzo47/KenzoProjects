import firebase from "firebase";

const firebaseConfig = {
  apiKey: "AIzaSyA0pgcYqiADMveQJj88MMGSIHIkGEYfakI",
  authDomain: "reactorderapp-3e905.firebaseapp.com",
  databaseURL: "https://reactorderapp-3e905-default-rtdb.europe-west1.firebasedatabase.app",
  projectId: "reactorderapp-3e905",
  storageBucket: "reactorderapp-3e905.appspot.com",
  messagingSenderId: "392857810668",
  appId: "1:392857810668:web:4e66d8bd6dff7ce815d7c9",
  measurementId: "G-HV7NY0SHW1"
};

firebase.initializeApp(firebaseConfig);

export default firebase;