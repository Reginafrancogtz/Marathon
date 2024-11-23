#MARATHON

**WHAT IS IT?**

A Marathon game is an interactive activity where participants answer a series of questions, usually related to a specific topic or general knowledge. These questions can be organized by difficulty levels and presented in various formats, such as multiple choice, true or false, fill-in-the-blank, or open-ended responses.
The game can be designed for individual play, group participation, or competitive modes. Often, it includes mechanisms to track scores, set time limits for answering, or incorporate features like rewards or level unlocking to make it more dynamic and engaging.

Common Features:
Variety of topics: History, science, general knowledge, entertainment, sports, etc.
Interactivity: Actively involves players in answering questions.
Reward systems: Points, levels, or bonuses for correct answers.
Game modes: Solo, local multiplayer, or online multiplayer.
Adaptable technology: Can be implemented as mobile apps, web platforms, or physical games.

**MARATHON IN THIS PROJECT** 

In the case of this project, we are looking to create a Marathon game with the following specifications. First, the questions will focus on two topics, musical culture and history, these questions will all be of the same difficulty. The game will be designed to be played individually and will have a mechanism that will track the player's score by awarding points if the answer (multiple choice) is correct. The game does not have any timer or function that establishes time limits, all this to make it more dynamic and attractive.

Purposes of the game:
The goal is to create an interactive game where a player can answer questions from different categories (in this case, music and history). The system should:
-Manage a player and their score.
-Display questions from various categories, with multiple-choice answers.
-Verify answers and update the player’s score.
-Differentiate between types of questions (e.g., music questions include hints about artists, albums, genres).

**WHAT IS IT USED FOR?**

A Marathon game is primarily used for entertainment, education, and skill development. It serves as a fun and engaging way to test knowledge on various topics, making it an effective tool for both casual learning and formal training. In educational contexts, it helps reinforce information retention by transforming the learning process into an interactive and enjoyable experience. For example, it can be used in schools, corporate training, or self-improvement platforms to teach concepts, assess progress, or prepare for exams. Additionally, Marathon games promote cognitive skills such as critical thinking, quick decision-making, and problem-solving under pressure. In the entertainment industry, they provide a competitive and social aspect, allowing friends or strangers to compete in knowledge-based challenges, fostering engagement and collaboration. Beyond personal enjoyment, these games are also used in marketing, where businesses create branded quizzes to increase customer interaction, gather feedback, or promote products in an interactive manner. Their versatility and adaptability make them valuable tools in education, entertainment, and even professional development.

**WHAT IS IT NOT USED FOR?**

A Marathon game is not typically used for tasks that require complex, real-time decision-making, such as those found in simulation software for engineering, medical procedures, or military operations. It is not intended for deep analytical processing or extensive problem-solving scenarios. Finally, they are not built for long-form storytelling or immersive experiences, which are better suited for role-playing games, novels, or films. In summary, while Marathon games are excellent for quick learning, entertainment, and knowledge testing, they are not meant for applications requiring deep analysis, physical skills, emotional therapy, or immersive narratives.



**UML CLASS DIAGRAM**



![Diagrama drawio (2)](https://github.com/user-attachments/assets/53f1daa2-cc3b-4ccf-b409-cdb6e7b808bf)

**CLASS DESCRIPTION:**

Class: Game

Purpose:

Serves as the main controller of the game, managing the interaction between the player and the questions and ensuring the game progresses smoothly.
Justification:

The Game class is central to the system, coordinating all gameplay elements. It handles starting the game, presenting questions, and managing the flow between music and history categories.
Its scalability ensures that new question categories can be integrated seamlessly, making it a flexible and reusable component of the system.

Class: Player

Purpose:

Represents the player, storing their name and score, and allowing the game to track their progress and performance.
Justification:

The Player class personalizes the game by storing the player’s name and keeping track of their score. This is critical for evaluating performance and providing motivation to the player.
It is a fundamental element of the game, as it ensures player progression can be managed and displayed effectively.

Class: Game

Purpose:

Serves as the main controller of the game, managing the interaction between the player and the questions and ensuring the game progresses smoothly.
Justification:

The Game class is central to the system, coordinating all gameplay elements. It handles starting the game, presenting questions, and managing the flow between music and history categories.
Its scalability ensures that new question categories can be integrated seamlessly, making it a flexible and reusable component of the system.

Class: Player

Purpose:

Represents the player, storing their name and score, and allowing the game to track their progress and performance.

Justification:

The Player class personalizes the game by storing the player’s name and keeping track of their score. This is critical for evaluating performance and providing motivation to the player.
It is a fundamental element of the game, as it ensures player progression can be managed and displayed effectively.

Class: Question (base class)

Purpose:

Provides the foundational structure for all question types, including attributes for the question text, topic, options, and the correct answer.

Justification:

The Question class centralizes shared logic, reducing redundancy and ensuring consistency across different question types.
By serving as a base class, it supports specialization through inheritance, enabling the creation of more complex and diverse question types (MusicQuestion, HistoryQuestion) while maintaining a clean and modular design.

Class: MusicQuestion (inherits from Question)

Purpose:

Extends Question to include music-specific details such as artist, album, and genre, enhancing the thematic scope of the game.

Justification:

The MusicQuestion class adds depth to the gameplay by introducing attributes and methods unique to music-related questions. This specialization makes the game more engaging and appealing to players interested in music.
Its modularity ensures the game remains flexible and can easily incorporate other specialized question types in the future.

Class: HistoryQuestion (inherits from Question)

Purpose:

Extends Question to include historical context through attributes like period and event, enabling questions about key moments in history.

Justification:

The HistoryQuestion class enriches the game’s educational value by introducing historical topics. This variety keeps the gameplay diverse and engaging.
Its design adheres to the same modular principles as MusicQuestion, ensuring consistency while supporting the inclusion of new themes or question categories.



**HOW IS IT EXPECTED TO BE USED**
1. Create your player profile:
When the game starts, you’ll be asked to enter your name.
You’ll begin with an initial score of 0 points.
2. Start the game:
Once your profile is ready, the game will kick off with rounds of questions.
The game includes two types of questions:
Music Questions: Related to artists, albums, and music genres.
History Questions: About historical periods and key events.
3. Answer the questions:
For each question, you’ll see:
A question text.
Multiple answer options.
Your task is to select the option you think is correct.
4. Scoring:
If you answer correctly, you’ll earn points.
If you’re wrong, don’t worry: you’ll have another chance with the next question!






 
