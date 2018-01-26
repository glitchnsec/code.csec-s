+   <u>**Welcome to Web101**</u>

    This semester we focus on Web Applications and Computer Networks (In)Security. This document outlines an introduction to
    the materials that will be covered. You will be provided with online learning materials by knowlegeable individuals, in class
    introduction and guidelines and hands-on walkthroughs. Ultimately, what you gain from this is directly correlated to how much
    time you invest in it on your own.

    <u>Text & Online course (Recommended)</u>

    +   Web Application Hackers Handbook

    +   [Hacker101 by HackerOne](https://www.hacker101.com)

+   <u>**What is a Web Application**</u>

    We use web applications everyday. Any non-static resource available over the web can be considered as a web application. Web Apps
    could comprise of Front-End only, Front-End + Back-End and Back-End only (providing/exporting APIs). Example web applications 
    include, social media apps, banking portals, online shopping apps, content resource managers etc.

    Web Applications can be a trove of vulnerabilities as they are built of many moving parts. Due to their complexity and shortage of
    skilled secure programmers, it is very common that organizations are initially breached from their web applications.

    Typically, Web Applications are accessed through the browser (Front-End Only and Front + Back -End). However, they can be accessed
    by using pretty much any tool that understands the HTTP protocol. This is where some of the issue lies. These applications are built
    with a browser in mind and as such are not expecting some kinds of interaction.
    
    The goal of this unit is to help you identify Web Application vulnerabilities and where to search for them. As Computer Scientists and
    programmers, knowlege gained here should make you more secure programmers.

+   <u>**Security of Web Applications**</u>

    The security of Web applications is dependent on multiple factors.

    1.  The security of the netwok on which they are deployed. i.e, Firewalls, load balancers, cachers etc

    2.  The security of client 3rd party technology

    3.  The security of native client technology

    4.  The security of the server side  3rd party technology

    5.  The security of native server side technology

    6.  The skill and knowlege of the programmers and designers

    7.  The skill and knowlege of the adversary

    Aside from item 7, a near-secure web application would require a check mark on each of the listed items. We can already see the problem here;
    The goal of the defender or secure programmer is to prevent vulnerabilities and bugs in any of the components, whereas, the attacker only needs
    to find a few and leverage them to achieve compromise

+   <u>**Insecurity of Web Applications**</u>

    The insecurity of Web Applications lies in their very nature. Web applications are built to provide content or resources. The question is if it
    provides only the contents and access it was intended to provide.

    Web Applications also provide a variety of communication channels, explicitly and implicitly (i.e interaction with the browser and interaction with a person).
    Most times, interactions with browsers are assumed to be safe. Hopefully, you already see this a bad assumption as we do not require browsers to interact
    with Web Applications.

    Web Applications use a lot of external resource and libraries. It is usually almost impossible to verify these libraries before deployment. The developers
    trust the library maintainers to provide secure working code. These libraries may not have undergone thorough code review and analysis and sometimes have poor
    documentations. Misuse of such libraries expose the application to attacks never considered by the development engineers.

    Since the attacker need only find one or a few vulnerabilites in the presence of many options, the probability of success is high hence the insecurity of 
    the web application. Although some vulnerabilities are easy to find and exploit, the complexity of web applications may also increase the complexity of
    performing an attack. Usually, sophisticated attacks are performed by more informed and knowlegeable adversaries.

+   <u>**Strategies for Web Application security assessment**</u>

    Given the size of the assessment, it is imperative to follow a methodology (of course with some room for ingenuity and creativity) in order to avoid getting
    lost in unfruitful ventures. The recommended text provides an approach that should do the job most of the time. In summary, it involves decomposing a web application
    into its variopus moving parts and assessing these parts to the very detail. Tedious eh? We will introduce tools for automation of repetitive task so brain juice can
    be saved for the more interesting task of reasoning and exploitation.

+   <u>**Programming and scripting**</u>

    Python will be used for scripting small tools, not because these tools do not already exist but to improve our understanding of the HTTP(S) protocol and
    how to communicate using these protocol. Basic knowlege of the python programming is required.

+   <u>**Tools**</u>

    +   Firefox Developer Edition will definitely come in handy

    +   BurpSuite (Freemium): Network proxy amongst other uses.

    More on these as we deem necessary