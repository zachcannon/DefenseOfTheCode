Project Outline - Defense of the Code!
============

This project focuses on the following design concepts: 

* Code Smells
* Refactoring Techniques
* Inheritance and Polymorphic Principles

Identifying code smells and refactoring code is a day to day task in the working world, so it's importance cannot be stressed enough! Inheritance is a powerful tool to use when appropriate, and studying it also reinforces one's knowledge of object oriented design.

##Phase 1
This game centers around two units in combat, where the loser is the unit who runs out of health first. Each unit has an attack value and a defense value. During a round, each unit attacks the other one time, so the victor does not hinge on who attacks first. This game is currenlty implemented in SmellyApp.cpp.

1. Take a look at the file SmellyApp.cpp. This code is riddled with bad coding techinques and code smells. (Don't worry, we had to struggle to write code this bad!) Take some time to look through this .cpp file and try to envision what it is doing.
2. In the README.md file, there are links to various resources that list/explain code smells and refactoring techniques. Read through these and try to commit a few to memory. 
3. With the techniques from part 2 in mind, look back at SmellyApp.cpp. In a separate file, list any code smells that you have sniffed out and possible refactoring techniques that can be used to eliminate the smells.
4. Use refactoring techniques to fix the code smells from part 3.
5. Repeat steps 3 and 4 until you are happy with the results. Refactoring in multiple passes helps to identify new code smells that were not seen before.

##Phase 2
In this phase we want to extend the functionality of the game by adding in different unit types.

1. Adding to the Phase 2 starting code, we want to allow the MilitaryUnit to behave differently according to it's type. Change the constructor for Military unit to take in a value corresponding to a different type. Based on this input, the unit will act differently when calling it's functions. Do not add additional classes to the solution for this part.
  * A unit that gains health for half the amount of damage it does in an attack.
  * A unit that takes half damage from incoming sources.
  * A unit that has a save ability. When his health goes below 0, if his health if his health was above 1 before, his health is set to 1.
2. Now, take a look at the inheritance and polymorphism resources provided in the README.md file. 
3. Use the concepts gathered from part 2 and refactor the your code from part 1 into subclasses of MilitaryUnit using-inheritance.
4. Add two more subclasses of your own. You should have 5 subclasses at the end of this part.
5. Look back over the differences between the code derived for part 1 and 3. In a separate file, write a short essay discussing the benefits of using one method over the other. 

##Phase 3
Complete the game with the criteria listed below, keeping in mind the good design practices learned in Phase 1 and 2. If anything seems unclear or vague, it is because this part has loose requirements. Just be creative here.

1. Create a squad that has multiple Units in it. 
2. Change the logic of DefenseOfTheCodeGame to allow squads to fight.
