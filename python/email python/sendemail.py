import smtplib

#1. Setup the connection
server=smtplib.SMTP('smtp.gmail.com',587)
server.starttls() # Encrypt the connection

#2. login
email = "mukherjeearpan348@gmail.com"
password= "VrHqi,4FD+.5hUX"
server.login(email,password)

# 3. send the mail
server.sendmail(email, "mukherjeearpan384@gmail.com", "Subject: Hello\n\n This is a test email from Python!")

# 4.Quit
server.quit()