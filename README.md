
# COMP2404 
# ---Introduction of Software Engineering--- Assignment 4
In this assignment, I created a podcast network named Podify. This network is designed to hold Podcasts, each of which contains multiple Episodes. 
To enhance the user experience, I implemented a Search object. This object is capable of identifying Episodes that meet specific criteria and compiling them into a playlist.
One of the key features of this project is the ability to play Episodes. Users have the option to experience the content with or without a video element, which is represented by unique ASCII art.
The creation of Podcasts, Episodes, and Search objects is handled by a PodcastFactory. 

This assignment takes uses
1. Operator overloading (with polymorphism).
2. Templates to achieve data abstraction
3. Multiple inheritance in a diamond hierarchy.
4. Factories to separate object creation from application logic
5. A strategy pattern to change behaviour at runtime.

# Class Overview
This application will consist of 10 base classes and 5 derived classes (of the Search and PodcastPlayer classes).
1. Podcast (Entity / Container object):
    (a) Contains Podcast meta-data as well as a collection of Episodes.
2. Episode (Entity):
    (a) Contains Episode meta-data and content
3. Search (Behaviour object): Virtual base or Abstract class of all Search objects.
    (a) H_Search (Behaviour object): Matches Episodes by the Podcast host.
    (b) C_Search (Behaviour object): Matches Episodes by the Podcast category.
    (c) HorC_Search (Behaviour object): Matches Episodes by the Podcast host or category.
4. Array (Container object):
    (a) A simple (templated) data structure.
5. Podify (Control object):
    (a) Stores Podcasts along with their Episodes, allows them to be queried.
6. PodcastPlayer (Behaviour object): Determines how to play an Episode (either "audio" only, or "audio and video", both of which are simply text).
    (a) AudioPlayer: Displays the audio of an Episode.
    (b) VideoPlayer: Displays the audio of an Episode and some ASCII art which is loaded from a le at runtime
7. View (View object):
    (a) Collects user input and displays Podcasts, Episodes and other information.
8. Control (Control object):
    (a) Manages the interactions of Podify, PodcastFactory, and View. Stores the Episode playlist.
9. TestControl (Control object):
    (a) Test framework for Podify.
10. Tester:
    (a) Provides some common test functionality
# Instalation and Running the Project
1. Clone the repository: First, you need to clone the repository to your local machine. You can do this with the following command:
   git clone https://github.com/Jonathan03ant/COMP2404-A4.git
2. Navigate to the project directory and make sure there make file is updated
3. Build the project using a "Make" command which will create a "test" executable
4. Run the ./test executable
