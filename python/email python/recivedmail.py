import imaplib

#1. Connect to the inbox server
mail=imaplib.IMAP4_SSL('imap.gmail.com')

# 2. Login
mail.login("mukherjeearpan384@gmail.com","VrHqi,4FD+.5hUX")

#3. select inbox
mail.select("inbox")

#4. search for emails
status, messages = mail.search(None, 'ALL')

#5.print the ID of the lates email
print("Email IDs found", messages[0])

