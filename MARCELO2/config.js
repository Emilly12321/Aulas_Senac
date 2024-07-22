// src/firebase/config.js
import { initializeApp } from 'firebase/app';
import { getAuth } from 'firebase/auth';
import { getFirestore } from 'firebase/firestore';

const firebaseConfig = {
    apiKey: "AIzaSyDMv2Jo_1pvJ6Qsrf0MzgqM4NoLlKds1JM",
    authDomain: "aulacrud-f4fca.firebaseapp.com",
    projectId: "aulacrud-f4fca",
    storageBucket: "aulacrud-f4fca.appspot.com",
    messagingSenderId: "90561834850",
    appId: "1:90561834850:web:967cf83679122975fa863b"
};

const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const firestone = getFirestore(app);

export { app, auth, firestone };