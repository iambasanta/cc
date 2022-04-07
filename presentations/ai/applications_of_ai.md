---
title: Applications of Artificial Intelligence
author: Basanta Rai
date: 2022-03-30
---

```

                                 _ _           _   _             
                __ _ _ __  _ __ | (_) ___ __ _| |_(_) ___  _ __  
               / _` | '_ \| '_ \| | |/ __/ _` | __| |/ _ \| '_ \ 
              | (_| | |_) | |_) | | | (_| (_| | |_| | (_) | | | |
               \__,_| .__/| .__/|_|_|\___\__,_|\__|_|\___/|_| |_|
                    |_|   |_|                                    
                                          __ 
                                    ___  / _|
                                   / _ \| |_ 
                                  | (_) |  _|
                                   \___/|_|  
                                             
                                _   _  __ _      _       _ 
                      __ _ _ __| |_(_)/ _(_) ___(_) __ _| |
                     / _` | '__| __| | |_| |/ __| |/ _` | |
                    | (_| | |  | |_| |  _| | (__| | (_| | |
                     \__,_|_|   \__|_|_| |_|\___|_|\__,_|_|
                                                           
                _       _       _ _ _                           
               (_)_ __ | |_ ___| | (_) __ _  ___ _ __   ___ ___ 
               | | '_ \| __/ _ \ | | |/ _` |/ _ \ '_ \ / __/ _ \
               | | | | | ||  __/ | | | (_| |  __/ | | | (_|  __/
               |_|_| |_|\__\___|_|_|_|\__, |\___|_| |_|\___\___|
                                      |___/                     

                                    

```

---

# Applications of Artificial Intelligence

Applications of AI are:

- Autonomous planning and scheduling


- Game playing


- Autonomous control 


- Expert system


- Logistic Reasoning


- Robotics


- Language understanding and problem solving


- Speech Recongnition


- Computer vison


---

## Autonomous planning and scheduling

### what is planning in general?

- it is a thinking process that chooses and organizes actions by anticipating their outcomes


- or the process of making plans for something.


- planning involves deciding beforehand, what is to be done, when is it to be done, how it is to be done and who is going to do it.


- simply we can say that the planning is arranging a sequence of actions to achive a goal

---

### what is planning in AI then?

- the planning in ai is about the decision making tasks performed by the robots or computer programs to achive a specific goal


- the execution of planning is about choosing a sequence of actions


- planning refers to the process of computing several steps of a problem solving procedure before executing any of them


- planning is arranging a sequence of actions to achive a goal


#### Planning process in AI includes :

- an initial state: I


- a goal state: G


- action: A


- A plan enables an AI system to perform a series of actions from A, that turns I into G. 


- In other words, the plan tells the AI what to do; and when to do it.

---

### Example

```
                                    ┌───────┐
                                    │Parking│
                                    └───────┘
     ___________________________
  _ //~~~~~~~~~~~~~|------|-----\    |
_|_/-------------/_|______|_______\__|________,_
  \ _@_______________|____-_|-______|_____________)
   <____//   \|______|______|_______|_//   \)_____>
         \___/                         \___/


```

- For example lets us take an autonomous vechile which is parked

    - I: would be when it is parked on neutral

    - G: would be for the car to be out of the parking spot and at the front entrance

    - A: would include actions like move forward/backward, steer left/right, scan for obstacles and adjust course etc.

---

## Game playing

- AI in gaming refers to responsive and adaptive video game experiences. 


- Games don’t require much knowledge; the only knowledge we need to provide is the rules, legal moves and the conditions of winning or losing the game


- These AI-powered interactive experiences are usually generated via non-player characters, or NPCs, that act intelligently or creatively, as if controlled by a human game-player.


- AI is the engine that determines an NPC’s behavior in the game world.


- AI has continued to improve, with aims set on a player being unable to distinguish between computer and human player


- The game playing in AI is about the illusion of human behaviour like:
    - smart to certain extent
    - non-repeating behaviour
    - emotional influences(irrationality,personality)
    - body language to communicate emotions
    - being integrated in the environment

---

### For this AI needs various computer science desciplines

- knowledge based systems


- machine learning


- multi-agent systems


- computer graphics and animation


- data structures

---

### Computer Games where AI can be implemented

- Strategy games

    
- Role-Playing games(RPG)


- Action Games


- Sports Games


- Simulators


- Adventure Games


- Puzzle Games

---

### Example

- while playing FIFA 2022 in legendary mode with the CPU, the characters controlled by the CPU can predict your moves like in which direction you are going to pass the ball. 
  And also  the commentary comments on the action you perform by judging your action like when you take a shot and hit the post , the commentary comments “ So close,it’s hit the post”.


- Bots in games like CS and PUBG

---

## Autonomous control system(ACS)

- ACS are softwares tools designed using model-based engineering,AI,ML, and data acquisition 


- It is used to enable self-governance of vechile control functions with little to no human intervention for extended periods in an uncertain or contested environment. 


- This autonomous hierarchical functionality allows system failures to be recognized and compensated in real-time to carry out assigned objectives in rapidly changing, insecure, and dangerous environments.


- High-level autonomy of this kind – the level where a system uses AI and ML for “intelligent” decision-making – can correct operator errors, reduce on-the-job fatigue, and help make operations that use unmanned vehicles far more efficient and effective.


---

## Uses of ACS

- Autonomous control systems for consumers


- The military’s use of autonomous systems 


- Industrial/business drones


- Civil service use of unmanned vehicles


- Unmanned space crafts 

--- 

### Example

- Self-driving cars can transport a person from one point to the destination point without the involvement of the person in driving throughout the trip, i.e. it is controlled automatically.


- drones (flying robot) that will never crash and will autonomously deploy the parachute or the like and make a crash landing before crashing if an abnormality occurs.

---

## Expert system(ES)

- The expert system is a part of AI,


- An expert system is a computer program that is designed to solve complex problems and to provide decision-making ability like a human expert.


- It performs this by extracting knowledge from its knowledge base using the reasoning and inference rules according to the user queries.


- It solves the most complex issue as an expert by extracting the knowledge stored in its knowledge base. 


- The system helps in decision making for complex problems using both facts and heuristics like a human expert.


- It is called so because it contains the expert knowledge of a specific domain and can solve any complex problem of that particular domain. 


- These systems are designed for a specific domain, such as medicine, science, etc.


- The performance of an expert system is based on the expert's knowledge stored in its knowledge base.


- The more knowledge stored in the KB, the more that system improves its performance. 


- One of the common examples of an ES is a suggestion of spelling errors while typing in the Google search box.

---

### Examples of Expert Systems

- DENDRAL:
    - used to detect unknown organic molicules  with the help of their mass spectra and knowledge base of chemistry.


- MYCIN: 
    - designed to find the bacteria causing infections like bacteraemia and meningitis.
    - also used for the recommendation of antibiotics and the diagnosis of blood clotting diseases.


- PXDES: 
    - used to determine the type and level of lung cancer.
    - To determine the disease, it takes a picture from the upper body, which looks like the shadow. This shadow identifies the type and degree of harm.


- CaDeT:
    - The CaDet expert system is a diagnostic support system that can detect cancer at early stages.

---

## Logistic Reasoning

- Reasoning is the mental process of deriving logical conclusion and making predections from available knowledge, facts and beliefs.


- In AI, the reasoning is essential  so that the machine can also think rationally as a human brain, and can perform like a human


- Logistic is the process of planning, implementing and controlling the efficient, effective flow and storage of goods, services and related information from point of origin to the point of consumption for conforming to customer requirements


- Planning is a sequence of action to achieve a goal

 
- AI helps planners in real logistics operations by using intelligent alerts based on predictive analytics

 
- Logistics planning serves to link and synchronise the overall supply chain as a continuous process and is essential for effective supply chain connectivity

 
- Logistic planning is the ability to satisfy and retain customer: Cost,Convience and Confidence

 
- For example, using sources like MarineTraffic companies can get information about real-time positions and Estimated Time of Arrival (ETA) for every ship in the world based on satellite data


--- 

## Robotics

- Robotics is a branch of AI, which is composed of different banches and applications of robots.


- Artificial Intelligence has a remarkable role in Robotics. 


- AI robots are the artificial agents acting in the realworld environment.


- AI robot is aimed at manipulating the objects by  perceiving, picking, moving, destrying it.


- Usually, general robots are programmed such that they can perform some repetitive task, but with the help of AI, we can create intelligent robots which can perform tasks with their own experiences without pre-programmed.


- Humanoid Robots are best examples for AI in robotics, recently the intelligent Humanoid robot named as Erica and Sophia has been developed which can talk and behave like humans.


- Robots are used in Hospitals, Restaurants, space, manufacturing industries, research military etc.

---

### Example

```
    (\____/)
     (_oo_)
       (O)  \_____/
     __||__    \)
  []/______\[] /
  / \______/ \/
 /    /__\
(\   /____\
    o     o
┌──────────────────┐
│food serving robot│
└──────────────────┘

```

---

## Language understanding and problem solving
- Problem solving has been the key area of concern for Artificial Intelligence.


- Problem solving is a process of generating solutions from observed or given data.

---

## Speech Recongnition

### What is speech recognition ?

- speech recognition, or speech-to-text, is a capability that enables a program to process human speech into a written format. 


- speech recognition focuses on the translation of speech from a verbal format to a text one


- Natural language processing (NLP) gives computers the ability to understand text and spoken words in much the same way human beings can.


- NLP combines computational linguistics with statistical, machine learning (ML), and deep learning models. 
  Together, these technologies enable computers to process human language in the form of text or voice data and to ‘understand’ its full meaning, complete with the speaker or writer’s intent and sentiment.

---

### Example
- Speech technology has been deployed in digital personal assistants, smart speakers, smart homes, and a wide range of other products. 
  The technology allows us to perform a variety of voice-activated tasks.


- Google Dictate


- Voice search


- Voice Assistants
    - eg: google assistant, alexa, siri etc.

---
## Computer vison

### What is computer vision ?
- Computer vision is a field of artificial intelligence (AI) that enables computers and systems to derive meaningful information from digital images, videos and other visual inputs — and take actions or make recommendations based on that information.
  If AI enables computers to think, computer vision enables them to see, observe and understand.


- Computer vision works much the same as human vision, except humans have a head start. 
  Human sight has the advantage of lifetimes of context to train how to tell objects apart, how far away they are, whether they are moving and whether there is something wrong in an image.


- Computer vision trains machines to perform these functions, but it has to do it in much less time with cameras, data and algorithms rather than retinas, optic nerves and a visual cortex. 
  Because a system trained to inspect products or watch a production asset can analyze thousands of products or processes a minute, noticing imperceptible defects or issues, it can quickly surpass human capabilities.


- Computer vision is used in industries ranging from energy and utilities to manufacturing and automotive – and the market is continuing to grow.


- Two essential technologies are used to accomplish this:
    - a type of machine learning called deep learning
    - and a convolutional neural network (CNN).


- Computer vision needs lots of data. 


- It runs analyses of data over and over until it discerns distinctions and ultimately recognize images. 


- For example, to train a computer to recognize automobile tires, it needs to be fed vast quantities of tire images and tire-related items to learn the differences and recognize a tire, especially one with no defects.

---

### Example
- Computer vision in agriculture
    - computer vision is used to automate various activities in agriculture such as:
        - flowering detection
        - plang disease detection 
        - crop monitoring 
        - product quality testing etc.


    - drone captures enoromous amount of data via a pre-installed camera


    - the camera is trained to to detect the adverse 
        - weather conditions
        - crop health information
        - arieal view of a land
        - identify soil conditions

    - the data collected from these drones and satellite images is fed into smart systems


    - these systems analyze large volumes of complex data and provide reports


    - these accurate reports enable farmers to adopt more efficient growing methods
