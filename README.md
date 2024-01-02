
# COMP2404 
# PODIFY
In this project, I created a podcast network that is designed to hold Podcasts, each of which contains multiple Episodes. 
This podcast network also implements a search object capable of identifying episodes that meet specific criteria and compile them into a playlist.
One of the key features of this project is the ability to play Episodes (as an ASCII art) where users have the option to experience the content with or without a video element, which is again represented by unique ASCII art.
The creation of Podcasts, Episodes, and Search objects is handled by a PodcastFactory (controll class). 

This assignment takes uses
* [Operator overloading] (with polymorphism).
* [Templates] to achieve data abstraction
* [Multiple inheritance] in a diamond hierarchy.
* [Factories] to separate object creation from application logic
* [A strategy pattern] to change behaviour at runtime.

# Class Overview
This application includes 10 base classes and 5 derived classes (of the Search and PodcastPlayer classes).
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
   ```
   git clone https://github.com/Jonathan03ant/Podify.git
   ```
3. Navigate to the project directory and make sure the make file is updated.
4. Clear any previous buildup to make sure correctness of the code.
   ```
   make clean
   ```
6. Build the project using a "Make" command which will create a "test" executable.
7. Run the ./test executable.

   ### 2023 Intro To Computer Science, All rights to original proposal reserver to Professor Darryl Hill @Carleton Univeristy
