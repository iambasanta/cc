function validateForm() {
  username = document.getElementById("username").value;
  password = document.getElementById("password").value;
  submitButton = document.getElementById("submitButton");

  if (username.trim() === "") {
    document.getElementById("usernameError").innerHTML =
      "Username is required.";
    return false;
  } else {
    document.getElementById("usernameError").innerHTML = "";
  }

  if (password.trim() === "") {
    document.getElementById("passwordError").innerHTML =
      "Password is required.";
    return false;
  } else {
    document.getElementById("usernameError").innerHTML = "";
  }
  return true;
}
