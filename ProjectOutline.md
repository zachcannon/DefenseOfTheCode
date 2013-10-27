Project Outline - Defense of the Code!
============

In this project we will be focusing on a few areas of good design practices that we have found to be important in day to day application.

* Code Smells
* Refactoring Techniques
* Inheritance and Polymorphic Principles

The following project outline is non specific for a reason: we want the project to be relatable and fun! As you will see in the description of each phase, we have give an outline of the problem to solve and some specific tools to use. Adding any additional fun, creative, or quirky features is up to you (and making us smile as we are reading your code is never bad for your grade!) 

##Phase 1
In Phase 1, we will be setting up the environment to make our game: Defense of the Code! This game centers around two units in combat, where the loser is the unit who runs out of health first. Each unit has an attack score and a defense score. During a round, each unit attacks the other one time, so the victor does not hinge on who attacks first. All other baseic aspects of the game are (poorly) implimented in SmellyApp.cpp.

1. Take a look at the file SmellyApp.cpp. This code is riddled with bad coding techinques and code smells. (Don't worry, we had to struggle to write code this bad!) Take some time to look through this .cpp file and try to envision what it is doing.
2. In the README.md file, there are links to various resources that list/explain code smells and refactoring techniques. Read through these and try to commit a few to memory. 
3. With the techniques from part 2 in mind, look back at SmellyApp.cpp. In a seperate file, list any code smells that you have sniffed out and possible refactoring techniques that can be used to eliminate the smells.
4. Finally, put these refactoring techniques into practice and generate some good looking, working code.

##Phase 2
In this phase, we want to extend the functionality of our game and allow everyone to get creative. We will post the starting code on GitHub the day after the Phase 1 submission. The goal of this phase is to extend the funcitonaly of the game by adding in different unit types. Think fantasy characters if you want to get ideas in mind.

1. Adding to the Phase 2 starting code, we want to allow the MilitaryUnits to be different military "classes". Change the constructor for Military unit to take in a 0, 1, or 2, each of these corresponding to a different class type. Based on this input, the unit will act differently when calling it's functions. 
2. Now, take a look at inheritance and polymorphism resources provided in the README.md file. 
3. Use the concepts gathered from part 2 and refactor the your code from part 1 into subclasses of MilitaryUnit using inheritance and add two more subclasses of your own. You should have 5 subclasses at the end of this part.
4. Look back over the differences in part 1 and 3. In a seperate file, write a short essay dicussing the benefits of using one method over the other. 

##Phase 3
Now that we have discussed and learned some new ideas and techniques, it's time to just have fun! Complete the game with the criteria listed below, keeping in mind the good design practices learned in Phase 1 and 2. If anything seems unclear or vague, it is because it is supposed to be. Just be creative here.

1. Create a squad class that has multiple Units in it. 
2. Change the logic of DefenseOfTheCodeGame to allow squads to fight.
