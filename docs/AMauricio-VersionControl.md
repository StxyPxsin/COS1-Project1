# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [ Project and Portfolio I: Computer Science - Online ]

- **[ Ariel Mauricio ]**
- **[ 09/06/2026 ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ clear ]: Clear the Screen
- [ pwd ]: Print the "Working Directory"
- [ 1s]: List files and folders
- [1s -a]: List files and folders, including invisible files
- [ 1s -1h]: List all files and folders, in human readable form
- [ cd[directoru_name]]: Change directory
- [ cd /]: Change directory, go to root directory
- [ cd ~]: Change directory and go to user home directory
- [ cd..]: Change directory, go up one folder level
- [ cd../..]: Change directory, go up two folder levels
- [ cd ~/Desktop]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[**the Terminal automatically inputs the absolute file path of that folder and changes your current working directory to it**.  ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ **- Local Version Control Systems (LVCS): This system uses a simple local database on a single computer to track changes to files. It is highly error-prone because if the local database is corrupted or accidentally deleted, all version history is lost.- **Centralized Version Control Systems (CVCS):** This system uses a single, centralized server that stores all versioned files, allowing multiple clients to check out files from that central place (e.g., SVN, Perforce). While it makes collaboration easier, the central server represents a single point of failure; if the server goes down, no one can collaborate or save versioned change                                                          **Distributed Version Control Systems (DVCS):** This system allows clients to fully mirror the entire repository, including its complete history, onto their local machines (e.g., Git, Mercurial). If any server dies, any of the client repositories can be copied back up to the server to restore it, making it highly secure and reliable for offline work.]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone [url]]: Clone a repository
- [ git config --global user.name "[your name]"]: Set-up a global user name
- [ git config --global user.email "[your email]"]: Set-up a global email address (to match my GitHub account email)
- [ git status]: Shows the current state of your directory and staging area
- [ git add [file]]: Add modified files to the next commit
- [it commit -m "[your message]"]: Make a commit with a new message
- [ git log]: Show my commit history
- [ git --help]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ 
Step 1: Generate a Personal Access Token (PAT) on GitHub
Step 2: Clone the Repository to Your Local Machine
Step 3: Authenticate in Terminal
Step 4: Verify the Connection
]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  [- The purpose of a `.gitignore` file is to specify intentionally untracked files that Git should ignore. It prevents temporary files, system artifacts, dependencies, and sensitive information from being accidentally committed and pushed to your public repository.]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [- The `.DS_Store` (Desktop Services Store) file is an automatic, hidden file created by macOS in every folder you open. It stores custom attributes and visual folder configurations, such as icon positions or background settings. You want to ignore it because it is metadata unique to your local machine; committing it adds clutter to your repository and can cause annoying merge conflicts for teammates working on different setups.]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [- You would want to add a **`node_modules/` folder** (or a `.env` file). The `node_modules` folder contains all the external packages and dependencies downloaded for a project. It should be ignored because it is massive, can contain thousands of files, and can easily be recreated by running `npm install` using the project's `package.json` file. (Alternatively, a `.env` file should be ignored because it stores sensitive credentials, API keys, and database passwords that must never be exposed publicly).]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ Research Summary: What resource(s) did you find most helpful this past week and why? ]

**Terminal Commands**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.google.com/search?q=Using+Terminal%2C+there+are+essential+commands+to+know.**+List+the+correct+Terminal+commands+to+do+the+actions+listed+below.+Replace+**CMD**+with+the+correct+command+sequence.+You+can+keep+or+enhance+the+brief+description.+**The+last+bullet+provides+an+example**.+-+%5B+CMD+%5D%3A+Clear+the+Screen+-+%5B+CMD+%5D%3A+Print+the+%22Working+Directory%22+-+%5B+CMD+%5D%3A+List+files+and+folders+-+%5B+CMD+%5D%3A+List+files+and+folders%2C+including+invisible+files+-+%5B+CMD+%5D%3A+List+all+files+and+folders%2C+in+human+readable+form+-+%5B+CMD+%5D%3A+Change+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+to+root+directory+-+%5B+CMD+%5D%3A+Change+directory+and+go+to+user+home+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+one+folder+level+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+two+folder+levels+-+%5B+CMD+%5D%3A+Change+directory+to+my+desktop%21&newwindow=1&sca_esv=93ab4b8f7168ead7&aep=10&cs=0&bih=906&hl=en-US&prmd=ivns&sxsrf=APpeQntS7MSsCXBjUQC92ky-e3Uq4EHE5w%3A1788830984110&fbs=ABfTbFVyMZGZf1hfvX9uKjN_-G8cqu7ocb7U6ah0xpkIrGMK4AD-5zQwT5IfpPJ6og2sC2LUjjLKxoHBw8IKOof-JuYEjI7x4LbrLiwmZg2QDzKeJ1FWu0-bq1x0-BSwmOLUne58Dogx323PsyUbBOqV2G_YaZpuZiYPqWxFDoLQX_Y2amo8-pQAdyV_ahWlpTq95cdUWjaRV60femsT14mDyOky1zACuQ&sa=X&ntc=1&mstk=AUtExfCSXZhNGikEEk3EWjLRzWteGtnOGh_YxIgM149Y26d6dbSjwNKYT8IkbxTkTFbEWo11FYFxeJTHzp2MFBPOVi_XquH8et0_OHwoQ2PJGNkubvchER4fgRobpwNpJihsbpE18XkPDWgsaAs6vs4CX4wJnqUxsP9TQaV_aFlnHWEUf3BWLJ4k2Kwqn5vh3ZSSMHEtKicjQuAH80tRpRAUXrUrHnUaotTGeuEoGy03F9QNxAKuLuGUGA0Tv6jQPuc5-cI2rNFi5q4dhA&aioh=3&csuir=1&sourceid=chrome&ccb=1&biw=803.3333740234375&atvm=2&mtid=JGWfatP8CfauqtsPiKW92Q8&udm=50))

**Three Types of Version Control**  
[Site Address]([https://www.someaddress.com/full/url](https://www.google.com/search?q=Using+Terminal%2C+there+are+essential+commands+to+know.**+List+the+correct+Terminal+commands+to+do+the+actions+listed+below.+Replace+**CMD**+with+the+correct+command+sequence.+You+can+keep+or+enhance+the+brief+description.+**The+last+bullet+provides+an+example**.+-+%5B+CMD+%5D%3A+Clear+the+Screen+-+%5B+CMD+%5D%3A+Print+the+%22Working+Directory%22+-+%5B+CMD+%5D%3A+List+files+and+folders+-+%5B+CMD+%5D%3A+List+files+and+folders%2C+including+invisible+files+-+%5B+CMD+%5D%3A+List+all+files+and+folders%2C+in+human+readable+form+-+%5B+CMD+%5D%3A+Change+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+to+root+directory+-+%5B+CMD+%5D%3A+Change+directory+and+go+to+user+home+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+one+folder+level+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+two+folder+levels+-+%5B+CMD+%5D%3A+Change+directory+to+my+desktop%21&newwindow=1&sca_esv=93ab4b8f7168ead7&aep=10&cs=0&bih=906&hl=en-US&prmd=ivns&sxsrf=APpeQntS7MSsCXBjUQC92ky-e3Uq4EHE5w%3A1788830984110&fbs=ABfTbFVyMZGZf1hfvX9uKjN_-G8cqu7ocb7U6ah0xpkIrGMK4AD-5zQwT5IfpPJ6og2sC2LUjjLKxoHBw8IKOof-JuYEjI7x4LbrLiwmZg2QDzKeJ1FWu0-bq1x0-BSwmOLUne58Dogx323PsyUbBOqV2G_YaZpuZiYPqWxFDoLQX_Y2amo8-pQAdyV_ahWlpTq95cdUWjaRV60femsT14mDyOky1zACuQ&sa=X&ntc=1&mstk=AUtExfCSXZhNGikEEk3EWjLRzWteGtnOGh_YxIgM149Y26d6dbSjwNKYT8IkbxTkTFbEWo11FYFxeJTHzp2MFBPOVi_XquH8et0_OHwoQ2PJGNkubvchER4fgRobpwNpJihsbpE18XkPDWgsaAs6vs4CX4wJnqUxsP9TQaV_aFlnHWEUf3BWLJ4k2Kwqn5vh3ZSSMHEtKicjQuAH80tRpRAUXrUrHnUaotTGeuEoGy03F9QNxAKuLuGUGA0Tv6jQPuc5-cI2rNFi5q4dhA&aioh=3&csuir=1&sourceid=chrome&ccb=1&biw=803.3333740234375&atvm=2&mtid=JGWfatP8CfauqtsPiKW92Q8&udm=50)/)

**Git Commands**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.google.com/search?q=Using+Terminal%2C+there+are+essential+commands+to+know.**+List+the+correct+Terminal+commands+to+do+the+actions+listed+below.+Replace+**CMD**+with+the+correct+command+sequence.+You+can+keep+or+enhance+the+brief+description.+**The+last+bullet+provides+an+example**.+-+%5B+CMD+%5D%3A+Clear+the+Screen+-+%5B+CMD+%5D%3A+Print+the+%22Working+Directory%22+-+%5B+CMD+%5D%3A+List+files+and+folders+-+%5B+CMD+%5D%3A+List+files+and+folders%2C+including+invisible+files+-+%5B+CMD+%5D%3A+List+all+files+and+folders%2C+in+human+readable+form+-+%5B+CMD+%5D%3A+Change+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+to+root+directory+-+%5B+CMD+%5D%3A+Change+directory+and+go+to+user+home+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+one+folder+level+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+two+folder+levels+-+%5B+CMD+%5D%3A+Change+directory+to+my+desktop%21&newwindow=1&sca_esv=93ab4b8f7168ead7&aep=10&cs=0&bih=906&hl=en-US&prmd=ivns&sxsrf=APpeQntS7MSsCXBjUQC92ky-e3Uq4EHE5w%3A1788830984110&fbs=ABfTbFVyMZGZf1hfvX9uKjN_-G8cqu7ocb7U6ah0xpkIrGMK4AD-5zQwT5IfpPJ6og2sC2LUjjLKxoHBw8IKOof-JuYEjI7x4LbrLiwmZg2QDzKeJ1FWu0-bq1x0-BSwmOLUne58Dogx323PsyUbBOqV2G_YaZpuZiYPqWxFDoLQX_Y2amo8-pQAdyV_ahWlpTq95cdUWjaRV60femsT14mDyOky1zACuQ&sa=X&ntc=1&mstk=AUtExfCSXZhNGikEEk3EWjLRzWteGtnOGh_YxIgM149Y26d6dbSjwNKYT8IkbxTkTFbEWo11FYFxeJTHzp2MFBPOVi_XquH8et0_OHwoQ2PJGNkubvchER4fgRobpwNpJihsbpE18XkPDWgsaAs6vs4CX4wJnqUxsP9TQaV_aFlnHWEUf3BWLJ4k2Kwqn5vh3ZSSMHEtKicjQuAH80tRpRAUXrUrHnUaotTGeuEoGy03F9QNxAKuLuGUGA0Tv6jQPuc5-cI2rNFi5q4dhA&aioh=3&csuir=1&sourceid=chrome&ccb=1&biw=803.3333740234375&atvm=2&mtid=JGWfatP8CfauqtsPiKW92Q8&udm=50))

**Connecting to GitHub using Terminal**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.google.com/search?q=Using+Terminal%2C+there+are+essential+commands+to+know.**+List+the+correct+Terminal+commands+to+do+the+actions+listed+below.+Replace+**CMD**+with+the+correct+command+sequence.+You+can+keep+or+enhance+the+brief+description.+**The+last+bullet+provides+an+example**.+-+%5B+CMD+%5D%3A+Clear+the+Screen+-+%5B+CMD+%5D%3A+Print+the+%22Working+Directory%22+-+%5B+CMD+%5D%3A+List+files+and+folders+-+%5B+CMD+%5D%3A+List+files+and+folders%2C+including+invisible+files+-+%5B+CMD+%5D%3A+List+all+files+and+folders%2C+in+human+readable+form+-+%5B+CMD+%5D%3A+Change+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+to+root+directory+-+%5B+CMD+%5D%3A+Change+directory+and+go+to+user+home+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+one+folder+level+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+two+folder+levels+-+%5B+CMD+%5D%3A+Change+directory+to+my+desktop%21&newwindow=1&sca_esv=93ab4b8f7168ead7&aep=10&cs=0&bih=906&hl=en-US&prmd=ivns&sxsrf=APpeQntS7MSsCXBjUQC92ky-e3Uq4EHE5w%3A1788830984110&fbs=ABfTbFVyMZGZf1hfvX9uKjN_-G8cqu7ocb7U6ah0xpkIrGMK4AD-5zQwT5IfpPJ6og2sC2LUjjLKxoHBw8IKOof-JuYEjI7x4LbrLiwmZg2QDzKeJ1FWu0-bq1x0-BSwmOLUne58Dogx323PsyUbBOqV2G_YaZpuZiYPqWxFDoLQX_Y2amo8-pQAdyV_ahWlpTq95cdUWjaRV60femsT14mDyOky1zACuQ&sa=X&ntc=1&mstk=AUtExfCSXZhNGikEEk3EWjLRzWteGtnOGh_YxIgM149Y26d6dbSjwNKYT8IkbxTkTFbEWo11FYFxeJTHzp2MFBPOVi_XquH8et0_OHwoQ2PJGNkubvchER4fgRobpwNpJihsbpE18XkPDWgsaAs6vs4CX4wJnqUxsP9TQaV_aFlnHWEUf3BWLJ4k2Kwqn5vh3ZSSMHEtKicjQuAH80tRpRAUXrUrHnUaotTGeuEoGy03F9QNxAKuLuGUGA0Tv6jQPuc5-cI2rNFi5q4dhA&aioh=3&csuir=1&sourceid=chrome&ccb=1&biw=803.3333740234375&atvm=2&mtid=JGWfatP8CfauqtsPiKW92Q8&udm=50))

**Using .gitignore and Why it's Important**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.google.com/search?q=Using+Terminal%2C+there+are+essential+commands+to+know.**+List+the+correct+Terminal+commands+to+do+the+actions+listed+below.+Replace+**CMD**+with+the+correct+command+sequence.+You+can+keep+or+enhance+the+brief+description.+**The+last+bullet+provides+an+example**.+-+%5B+CMD+%5D%3A+Clear+the+Screen+-+%5B+CMD+%5D%3A+Print+the+%22Working+Directory%22+-+%5B+CMD+%5D%3A+List+files+and+folders+-+%5B+CMD+%5D%3A+List+files+and+folders%2C+including+invisible+files+-+%5B+CMD+%5D%3A+List+all+files+and+folders%2C+in+human+readable+form+-+%5B+CMD+%5D%3A+Change+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+to+root+directory+-+%5B+CMD+%5D%3A+Change+directory+and+go+to+user+home+directory+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+one+folder+level+-+%5B+CMD+%5D%3A+Change+directory%2C+go+up+two+folder+levels+-+%5B+CMD+%5D%3A+Change+directory+to+my+desktop%21&newwindow=1&sca_esv=93ab4b8f7168ead7&aep=10&cs=0&bih=906&hl=en-US&prmd=ivns&sxsrf=APpeQntS7MSsCXBjUQC92ky-e3Uq4EHE5w%3A1788830984110&fbs=ABfTbFVyMZGZf1hfvX9uKjN_-G8cqu7ocb7U6ah0xpkIrGMK4AD-5zQwT5IfpPJ6og2sC2LUjjLKxoHBw8IKOof-JuYEjI7x4LbrLiwmZg2QDzKeJ1FWu0-bq1x0-BSwmOLUne58Dogx323PsyUbBOqV2G_YaZpuZiYPqWxFDoLQX_Y2amo8-pQAdyV_ahWlpTq95cdUWjaRV60femsT14mDyOky1zACuQ&sa=X&ntc=1&mstk=AUtExfCSXZhNGikEEk3EWjLRzWteGtnOGh_YxIgM149Y26d6dbSjwNKYT8IkbxTkTFbEWo11FYFxeJTHzp2MFBPOVi_XquH8et0_OHwoQ2PJGNkubvchER4fgRobpwNpJihsbpE18XkPDWgsaAs6vs4CX4wJnqUxsP9TQaV_aFlnHWEUf3BWLJ4k2Kwqn5vh3ZSSMHEtKicjQuAH80tRpRAUXrUrHnUaotTGeuEoGy03F9QNxAKuLuGUGA0Tv6jQPuc5-cI2rNFi5q4dhA&aioh=3&csuir=1&sourceid=chrome&ccb=1&biw=803.3333740234375&atvm=2&mtid=JGWfatP8CfauqtsPiKW92Q8&udm=50))
