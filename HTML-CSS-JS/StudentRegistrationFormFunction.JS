const form = document.getElementById('StudentRegistrationForm');
form.addEventListener('submit', function(event)
{
    event.preventDefault(); // This will stop the form from submitting the defualt values.

//here we are getting all the values of the form.
const fullname = document.getElementById('fullname').value.trim();
const email = document.getElementById('email').value.trim();
const password = document.getElementById('pass').value;
const confirmPassword = document.getElementById('confirm').value;

// This will check all the "required" fields from our registration form.
if (fullname === "") 
    {
    alert("Please enter your full name.");
    return;
    }

if (email === "") 
    {
    alert("Please enter your email.");
    return;
    }
    
// Here we are checking the Gender selection, first taking them as constants.
const genderMale = document.getElementById('male').checked;
const genderFemale = document.getElementById('female').checked;
const genderOther = document.getElementById('other').checked;
//Here we are checking if a gender is selected or not.
if (!genderMale && !genderFemale && !genderOther) {
    alert("Please select your gender.");
    return;
}

// Here we are taking department's value and seeing if its empty or not.
const department = document.getElementById('department').value;
if (department === "") {
    alert("Please select your department.");
    return;
}

if (password === "" || confirmPassword === "") 
    {
    alert("Please enter and confirm your password.");
    return;
    }
// this will check if the password and confirm password match
if (password !== confirmPassword) 
    {
    alert("Passwords do not match.");
    return;
    }
// this line will run if everything is okay.
alert("Registration Successful!");
form.reset(); //this will clear the form after submission
});