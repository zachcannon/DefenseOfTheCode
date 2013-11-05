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

1. Adding to the given Phase 2 starting code, we want to allow the military unit to behave differently according to its type. Based on this input, the unit will act differently when calling it's functions. We are not going into inheritance right now. We are just adding the behaviors in the military unit.
  * A necromancer unit type that gains health for half the amount of damage it does in an attack.
  * A tank unit type that takes half damage from incoming sources.
  * A monk unit type that has a save ability. When his health is 0 or goes below 0, he is saved from death with a health of 1 for that round (this only occurs once).
2. Now, take a look at the inheritance and polymorphism resources provided in the README.md file. 
3. Use the concepts gathered from part 2 and refactor the your code from part 1 into subclasses of MilitaryUnit using inheritance.
4. Add two more types of unit on your own. You should have 5 subclasses at the end of this part.
5. Look back over the differences between the code derived for part 1 and 3. In a separate file, write a short essay discussing the benefits and comparing having different types using inheritance and without.

##Phase 3
Complete the game with the criteria listed below, keeping in mind the good design practices learned in Phase 1 and 2.

1. Add the concept of a squad, which is multiple units. 
2. Instead of unit fighting a unit, have two players and each player has a squad to fight against each other. The loser is the player who loses all their units.
3. Add the concept of behavior that affects part or the whole squad. Example: Splash damage (damage done to multiple units when attacking). This is intentionally vague to allow for creativity.
4. We may prompt the user...how many and what type of units to add to the squad for each player. The order of attack can be the order added or random. Alternating or sequential. Up to you. Allowing for more creativity.
