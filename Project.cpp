#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
using namespace sf;


bool checkCollision(const Sprite& sprite1, const Sprite& sprite2)
{
    return sprite1.getGlobalBounds().contains(sprite2.getPosition().x, sprite2.getPosition().y);
}

class Pet{
    private:
        string UID;
    protected:
        string type;
        string name;
        int Health;
        int Attack;
        int Speed;
        int Defense;
        bool isAlive;
        int trainingPoints;
        int level;
        Texture petT;
        Sprite petS;
    public:
        Pet(string type = "NULL", string name = "NULL", int Health = 0, int Attack = 0, int Speed = 0, int Defense = 0, bool isAlive = 0, int trainingPoints = 0, int level = 0)
        {
            this->type = type;
            this->name = name;
            this->Health = Health;
            this->Attack = Attack;
            this->Speed = Speed;
            this->Defense = Defense;
            this->isAlive = isAlive;
            this->trainingPoints = trainingPoints;
            this->level = level;
        }
        virtual int getHp()
        {
            return Health;
        }
        virtual int getAtk()
        {
            return Attack;
        }
        virtual int getSpd()
        {
            return Speed;
        }
        virtual int getDef()
        {
            return Defense;
        }
        virtual string getName()
        {
            return name;
        }
        virtual int getTrainingPoints()
        {
            return trainingPoints;
        }

        virtual void setHp(int hp)
        {
            Health = hp;
        }
        virtual void setAtk(int Atk)
        {
            Attack = Atk;
        }
        virtual void setSpd(int Spd)
        {
            Speed = Spd;
        }
        virtual void setDef(int def)
        {
            Defense = def;
        }
        virtual void setTrainingPoints(int tp)
        {
            trainingPoints = tp;
        }
};

class Griffin: public Pet{
    public:
        Griffin(string type = "NULL", string name = "Griffin", int Health = 100, int Attack = 15, int Speed = 20, int Defense = 25, bool isAlive = true, int trainingPoints = 0, int level = 0):Pet(type, name, Health, Attack, Speed, Defense, isAlive, trainingPoints, level)
        {

        }
        int getHp()
        {
            return Health;
        }
        int getAtk()
        {
            return Attack;
        }
        int getSpd()
        {
            return Speed;
        }
        int getDef()
        {
            return Defense;
        }
        string getName()
        {
            return name;
        }
        int getTrainingPoints()
        {
            return trainingPoints;
        }

        void setHp(int hp)
        {
            Health = hp;
        }
        void setAtk(int Atk)
        {
            Attack = Atk;
        }
        void setSpd(int Spd)
        {
            Speed = Spd;
        }
        void setDef(int def)
        {
            Defense = def;
        }
        void setTrainingPoints(int tp)
        {
            trainingPoints = tp;
        }
};

class Pheonix: public Pet{
    public:
        Pheonix(string type = "NULL", string name = "Pheonix", int Health = 150, int Attack = 15, int Speed = 10, int Defense = 50, bool isAlive = true, int trainingPoints = 0, int level = 0):Pet(type, name, Health, Attack, Speed, Defense, isAlive, trainingPoints, level)
        {

        }
        int getHp()
        {
            return Health;
        }
        int getAtk()
        {
            return Attack;
        }
        int getSpd()
        {
            return Speed;
        }
        int getDef()
        {
            return Defense;
        }
        string getName()
        {
            return name;
        }
        int getTrainingPoints()
        {
            return trainingPoints;
        }

        void setHp(int hp)
        {
            Health = hp;
        }
        void setAtk(int Atk)
        {
            Attack = Atk;
        }
        void setSpd(int Spd)
        {
            Speed = Spd;
        }
        void setDef(int def)
        {
            Defense = def;
        }
        void setTrainingPoints(int tp)
        {
            trainingPoints = tp;
        }
};

class Dragon: public Pet{
    public:
        Dragon(string type = "NULL", string name = "Dragon", int Health = 200, int Attack = 30, int Speed = 15, int Defense = 25, bool isAlive = true, int trainingPoints = 0, int level = 0):Pet(type, name, Health, Attack, Speed, Defense, isAlive, trainingPoints, level)
        {

        }
        int getHp()  
        {
            return Health;
        }
        int getAtk()  
        {
            return Attack;
        }
        int getSpd()  
        {
            return Speed;
        }
        int getDef()  
        {
            return Defense;
        }
        string getName()
        {
            return name;
        }
        int getTrainingPoints()
        {
            return trainingPoints;
        }

        void setHp(int hp)
        {
            Health = hp;
        }
        void setAtk(int Atk)
        {
            Attack = Atk;
        }
        void setSpd(int Spd)
        {
            Speed = Spd;
        }
        void setDef(int def)
        {
            Defense = def;
        }
        void setTrainingPoints(int tp)
        {
            trainingPoints = tp;
        }
};

class Unicorn: public Pet{
    public:
        
    Unicorn(string type = "NULL", string name = "Unicorn", int Health = 50, int Attack = 20, int Speed = 30, int Defense = 25, bool isAlive = true, int trainingPoints = 0, int level = 0):Pet(type, name, Health, Attack, Speed, Defense, isAlive, trainingPoints, level)
        {

        }
        int getHp()  
        {
            return Health;
        }
        int getAtk()  
        {
            return Attack;
        }
        int getSpd()  
        {
            return Speed;
        }
        int getDef()  
        {
            return Defense;
        }
        string getName()
        {
            return name;
        }
        int getTrainingPoints()
        {
            return trainingPoints;
        }

        void setHp(int hp)
        {
            Health = hp;
        }
        void setAtk(int Atk)
        {
            Attack = Atk;
        }
        void setSpd(int Spd)
        {
            Speed = Spd;
        }
        void setDef(int def)
        {
            Defense = def;
        }
        void setTrainingPoints(int tp)
        {
            trainingPoints = tp;
        }
};

class Item{
    protected:
        string type;
        int magnitude;
    public:
        Item(string Type, int Magnitude)
        {
            type = Type;
            magnitude = Magnitude;
        }
        string getType() const
        {
            return type;
        }
        virtual void UseItem(Item*& items, Item item, Pet& pet)
        {

        }

};

class BuffItem: public Item{
    private:
            int time;
            string buffType;
    public:
        BuffItem(int time, string buffType, string Type, int Magnitude):Item(Type, Magnitude)
        {
            this->time = time;
            this-> buffType = buffType;
        }
        void UseItem(Item*& items, Item item, Pet& pet) override
        {
            
        }
};

class HealthPotion: public Item{
    public:
        HealthPotion(string Type, int Magnitude):Item(Type, Magnitude)
        {

        }
        void UseItem(Item*& items, Item item, Pet& pet) override
        {
            
        }
};

class ManaPotion: public Item{
    public:
        ManaPotion(string Type, int Magnitude):Item(Type, Magnitude)
        {
            
        }
        void UseItem(Item*& items, Item item, Pet& pet) override
        {
            
        }
};

class Shield: public Item{
    private:
            int time;
    public:
        Shield(int time, string Type, int Magnitude):Item(Type, Magnitude)
        {
            this->time = time;
        }
        void UseItem(Item*& items, Item item, Pet& pet) override
        {
            
        }
};

class Places{
    protected:
        int UID;
        string type;
        string name;
        string accessor;
    public:
        Places(int UID, string type, string name, string accessor)
        {
            this->UID = UID;
            this->type = type;
            this->name = name;
            this->accessor = accessor;
        }
};

class Shop: public Places{ 
    private:
        Item** items;
        int* quantities;
    public:
        Shop(int UID = 0, string type = "Shop", string name = "Potion Shop", string accessor = "S"):Places(UID, type, name, accessor)
        {
            quantities = new int[5];
            items = new Item*[5];
            items[0] = new HealthPotion("Health Potion", 20);
            items[1] = new ManaPotion("Mana Potion", 20);
            items[2] = new Shield(2.0, "Shield", 20);
            items[3] = new BuffItem(2.0, "Speed", "Buff Item - 1", 20);
            items[4] = new BuffItem(2.0, "Attack", "Buff Item - 2", 20);
        }
        Item**& getItems()
        {
            return items;
        }
        void AddItem(int*&items, Item item, int &currency)
        {
            if(currency >= 20)
            {
                if(item.getType() == "Health Potion")
                {
                    items[0]++;
                    currency -= 20;
                }
                else if(item.getType() == "Mana Potion")
                {
                    items[1]++;
                    currency -= 20;
                }
                else if(item.getType() == "Shield")
                {
                    items[2]++;
                    currency -= 20;
                }
                else if(item.getType() == "Buff Item - 1")
                {
                    items[3]++;
                    currency -= 20;
                }
                else if(item.getType() == "Buff Item - 2")
                {
                    items[4]++;
                    currency -= 20;
                }
            }
        }
        void RemoveItem(int*&items, Item item)
        {
            if(item.getType() == "HealthPotion")
            {
                items[0]--;
            }
            else if(item.getType() == "Mana Potion")
            {
                items[1]--;
            }
            else if(item.getType() == "Shield")
            {
                items[2]--;
            }
            else if(item.getType() == "Buff Item - 1")
            {
                items[3]--;
            }
            else if(item.getType() == "Buff Item - 2")
            {
                items[4]--;
            }
        }
};

class Obstacle{
    private:
        string type;
        int damage;
        bool isDestroyed;
        Vector2f position;
    public:
        Obstacle(string typ, int dmg, bool isDestroy, Vector2f pos)
        {
            type = typ;
            damage = dmg;
            isDestroyed = isDestroy;
            position = pos;
        }
        void DamagePet(Pet& pet)
        {

        }
        void Destroy()
        {

        }
};

class TrainingCamp{
    protected:
        int trainingIndex;
        int time;
        string subName;
        int trainingPoints;
    public:
        TrainingCamp(int tI, int tm, string sub = "NULL", int tp = 0)
        {
            trainingIndex = tI;
            time = tm;
            subName = sub;
            trainingPoints = tp;
        }
};

class ObstacleCourse: public TrainingCamp{
    private:
        int numOfObstacles;
        Obstacle obstacle;
    public:
        ObstacleCourse(int numOfObs, int tI, int tm, string sub = "NULL", int tp = 0, string typ = "Hit", int dmg = 20, bool isDestroy = false, Vector2f pos = Vector2f(0, 0)):TrainingCamp(tI, tm, sub, tp), obstacle(typ, dmg, isDestroy, pos)
        {
            numOfObstacles = numOfObs;
        }
        void TrainingLost(RenderWindow &window)
        {
            Font font;
            font.loadFromFile("Gloomie Saturday.otf");

            string title = "Training Failed!";
            Text Title(title, font, 42); 
            FloatRect titleBounds = Title.getLocalBounds();
            Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
            Title.setPosition(640, 360);

            Sprite backButton;
            Texture backTexture;
            backTexture.loadFromFile("tile052.png");
            backButton.setTexture(backTexture);
            backButton.setPosition(50, 50);
            backButton.setScale(3,3);

            Texture backgroundTexture;
            backgroundTexture.loadFromFile("trainingArena.jpg");

            Sprite backgroundSprite;
            backgroundSprite.setTexture(backgroundTexture);

            while(window.isOpen())
            {
                Event event;
                while(window.pollEvent(event))
                {
                    if(event.type  == Event::Closed)
                    {
                        window.close();
                    }
                    if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                    {
                        Vector2i mousePosition = Mouse::getPosition(window);

                        FloatRect buttonBounds[5];

                        FloatRect backButtonBounds;
                        backButtonBounds = backButton.getGlobalBounds();
                        if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                        {
                            return;
                        }
                    }
                }

                window.clear();
                window.draw(backgroundSprite);
                window.draw(Title);
                window.draw(backButton);

                window.display();
            }
        }
        void TrainingWin(Pet*& pet, RenderWindow &window)
        {
            pet->setTrainingPoints(pet->getTrainingPoints() + trainingPoints);

            Font font;
            font.loadFromFile("Gloomie Saturday.otf");

            string title = "Training Completed!";
            Text Title(title, font, 42); 
            FloatRect titleBounds = Title.getLocalBounds();
            Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
            Title.setPosition(640, 360);

            Sprite backButton;
            Texture backTexture;
            backTexture.loadFromFile("tile052.png");
            backButton.setTexture(backTexture);
            backButton.setPosition(50, 50);
            backButton.setScale(3,3);

            Texture backgroundTexture;
            backgroundTexture.loadFromFile("trainingArena.jpg");

            Sprite backgroundSprite;
            backgroundSprite.setTexture(backgroundTexture);

            while(window.isOpen())
            {
                Event event;
                while(window.pollEvent(event))
                {
                    if(event.type  == Event::Closed)
                    {
                        window.close();
                    }
                    if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                    {
                        Vector2i mousePosition = Mouse::getPosition(window);

                        FloatRect buttonBounds[5];

                        FloatRect backButtonBounds;
                        backButtonBounds = backButton.getGlobalBounds();
                        if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                        {
                            return;
                        }
                    }
                }

                window.clear();
                window.draw(backgroundSprite);
                window.draw(Title);
                window.draw(backButton);

                window.display();
            }
        }
        void Train(Pet*& pet, RenderWindow &window)
        {
            Font font;
            font.loadFromFile("Gloomie Saturday.otf");

            Sprite backButton;
            Texture backTexture;
            backTexture.loadFromFile("tile052.png");
            backButton.setTexture(backTexture);
            backButton.setPosition(50, 50);
            backButton.setScale(3,3);

            Texture backgroundTexture;
            backgroundTexture.loadFromFile("trainingArena.jpg");

            Sprite backgroundSprite;
            backgroundSprite.setTexture(backgroundTexture);

            srand(time);

            Clock clock;
            Clock clock2;
            float frameTime = 0.1f;

            Sprite petSprite;
            Texture petT;

            if(pet->getName() == "Dragon")
            {
                petT.loadFromFile("tile006.png");
            }
            else if(pet->getName() == "Pheonix")
            {
                petT.loadFromFile("pheonix1.png");
            }
            else if(pet->getName() == "Unicorn")
            {
                petT.loadFromFile("Unicorn1.png");
            }
            else if(pet->getName() == "Griffin")
            {
                petT.loadFromFile("Griffin1.png");
            }

            string timer = "0000";
            Text Timer(timer, font, 42); 
            FloatRect titleBounds = Timer.getLocalBounds();
            Timer.setOrigin(titleBounds.width/2, titleBounds.height/2);
            Timer.setPosition(640, 50);

            petSprite.setTexture(petT);
            petSprite.setPosition(640, 360);

            int timeMin = time - 1;

            int spawnTime = 3;

            bool isSpawning = false;

            Sprite obsS[numOfObstacles];
            Texture obsT;
            Vector2f spawnPoints[numOfObstacles];

            for(int i = 0; i < numOfObstacles; i++)
            {
                spawnPoints[i].x = 100*i;
                spawnPoints[i].y = -10;
            }

            obsT.loadFromFile("barrel.png");
            for(int i = 0; i < numOfObstacles; i++)
            {
                obsS[i].setTexture(obsT);
                obsS[i].setScale(0.1, 0.1);
                obsS[i].setPosition(spawnPoints[i]);
            }

            int currentObs[numOfObstacles];
            int tempTime ;

            while(window.isOpen())
            {
                int timeSec = time*60 - clock.getElapsedTime().asSeconds();
                timeSec = timeSec%60;
                if(timeSec == 0 && timeMin == 1)
                {
                    timeMin--;
                }
                timer = to_string(timeMin) + ":" + to_string(timeSec);
                Timer.setString(timer);   
                
                tempTime = spawnTime - clock2.getElapsedTime().asSeconds();
                if(tempTime <= 0)
                {
                    tempTime = spawnTime;
                    isSpawning = true;
                    for(int i = 0; i < numOfObstacles; i++)
                    {
                        currentObs[i] = rand()%4;
                    }
                    clock2.restart();
                }

                Event event;
                while(window.pollEvent(event))
                {
                    if(event.type  == Event::Closed)
                    {
                        window.close();
                    }
                    if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                    {
                        Vector2i mousePosition = Mouse::getPosition(window);

                        FloatRect buttonBounds[5];

                        FloatRect backButtonBounds;
                        backButtonBounds = backButton.getGlobalBounds();
                        if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                        {
                            return;
                        }
                    }
                }

                if(Keyboard::isKeyPressed(Keyboard::D) && petSprite.getPosition().x < 1200)
                {
                    petSprite.move(0.1*pet->getSpd(), 0);
                }
                if(Keyboard::isKeyPressed(Keyboard::A)&& petSprite.getPosition().x > 0)
                {
                    petSprite.move(-0.1*pet->getSpd(), 0);
                }
                if(Keyboard::isKeyPressed(Keyboard::S) && petSprite.getPosition().y < 640)
                {
                    petSprite.move(0, 0.1*pet->getSpd());
                }
                if(Keyboard::isKeyPressed(Keyboard::W) && petSprite.getPosition().y > 0)
                {
                    petSprite.move(0, -0.1*pet->getSpd());
                }
                

                for(int i = 0; i < numOfObstacles; i++)
                {
                    obsS[i].setPosition(obsS[i].getPosition().x, obsS[i].getPosition().y + 0.5);
                    if(currentObs[i] == 1)
                    {
                        if(checkCollision(petSprite, obsS[i]))
                        {
                            TrainingLost(window);
                        }
                    }
                }

                if(time*60 - clock.getElapsedTime().asSeconds() <= 0)
                {
                    TrainingWin(pet, window);
                    return;
                }

                window.clear();
                window.draw(backgroundSprite);
                window.draw(Timer);
                window.draw(backButton);
                window.draw(petSprite);

                if(isSpawning)
                {
                    for(int i = 0; i < numOfObstacles; i++)
                    {
                        if(currentObs[i] == 1)
                        {
                            obsS[i].setPosition(spawnPoints[i]);
                            window.draw(obsS[i]);  
                            isSpawning = false; 
                        }
                    }
                }
                else
                {
                    for(int i = 0; i < numOfObstacles; i++)
                    {
                        if(currentObs[i] == 1)
                        {
                            window.draw(obsS[i]);   
                        }
                    }
                }

                window.display();
            }
        }
};

class Character{
    private:
        string dUID;
    protected:
        string name;
        int numOfPets;
        Pet **pets;
        Texture iconT;
        Sprite iconS;
    public:
        Character(string uid = "NULL", string Name = "NULL", Pet **petptr = nullptr, int NumOfPets = 0)
        {
            dUID = uid;
            name = Name;
            numOfPets = NumOfPets;
            pets = new Pet*[numOfPets];
            for(int i = 0; i < numOfPets; i++)
            {
                pets[i] = petptr[i];
            }
        }
        string getUID() const
        {
            return dUID;
        }
        void AdoptPet(Pet *pet)
        {
            if(numOfPets < 4)
            {
                Pet **tempPets;
                tempPets = new Pet*[numOfPets + 1];
                for(int i = 0; i < numOfPets; i++)
                {
                    tempPets[i] = pets[i];
                }
                tempPets[numOfPets] = pet;
                numOfPets++;
                delete[] pets;
                pets = nullptr;

                pets = new Pet*[numOfPets];
                for(int i = 0; i < numOfPets; i++)
                {
                    pets[i] = tempPets[i];
                }

                delete [] tempPets;
                tempPets = nullptr;
                cout << pets[numOfPets - 1]->getName() << endl;
            }  
        }

};

class Player: public Character{
    private:
        string password;
        int points;
        int *items;
        Item *itemsList[5];
        Shop shop;
        ObstacleCourse tCamp1;
    public:
        Player(string pass = "NULL", string uid = "NULL", string Name = "NULL", Pet **petptr = nullptr, int NumOfPets = 0, int tI = 0, int tm = 1, string sub = "Training Camp", int tp = 2, int numOfObs = 20):Character(uid, Name, petptr, NumOfPets), tCamp1(numOfObs,tI, tm, sub, tp)
        {
            itemsList[0] = new HealthPotion("Health", 20);
            itemsList[1] = new ManaPotion("Mana", 20);
            itemsList[2] = new Shield(2,"Shield", 20);
            itemsList[3] = new BuffItem(2,"Speed Buff","Speed", 20);
            itemsList[4] = new BuffItem(2,"Attack Buff","Attack", 20);

            items = new int[5];
            for(int i = 0; i < 5; i++)
            {
                items[i] = 0;
            }
            password = pass;
            points = 1000;
        }
        string getName() const
        {
            return name;
        }
        int& getPoints()
        {
            return points;
        }
        void setPoints(int x)
        {
            points = x;
        }
        int*& getItems()
        {
            return items;
        }
        Shop& getShop()
        {
            return shop;
        }
        ObstacleCourse& getCourse()
        {
            return tCamp1;
        }
        Pet**& getPets()
        {
            return pets;
        }
        int getNumOfPets()
        {
            return numOfPets;
        }
        friend void AddPlayer(Player*& players, int &numOfPlayers, string uid, string Name, string password)
        {
            Player temp(password, uid, Name);
            Player * tempPlayers;
            tempPlayers = new Player[numOfPlayers + 1];
            for(int i = 0; i < numOfPlayers; i++)
            {
                tempPlayers[i] = players[i];
            }
            tempPlayers[numOfPlayers] = temp;
            numOfPlayers++;
            delete [] players;
            players = nullptr;
            players = new Player[numOfPlayers];
            for(int i = 0; i < numOfPlayers; i++)
            {
                players[i] = tempPlayers[i];
            }
            delete [] tempPlayers;
            tempPlayers = nullptr;
        }
        friend bool VerifyPlayer(Player* players, int numOfPlayers, string name, string password)
        {
            for(int i = 0; i < numOfPlayers; i++)
            {
                if(players[i].name == name && players[i].password == password)
                {
                    return true;
                }
            }   
            return false;
        }
};

class Bot: public Character{
    public:
        Bot(string uid = 0, string Name = "NULL", Pet **petptr = nullptr, int NumOfPets = 0):Character(uid, Name, petptr, NumOfPets)
        {
            
        }
};

class IO{
    private:
    string getInput(RenderWindow& window, const Font &font, const string &promptText, Sprite bg)
    {
        string title = "Magical Pets Kingdom";
        Text Title(title, font, 42); 
        FloatRect titleBounds = Title.getLocalBounds();
        Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
        Title.setPosition(640, 50);

        Text prompt(promptText, font, 36);
        FloatRect promptBounds = prompt.getLocalBounds();
        prompt.setOrigin(promptBounds.width/2, promptBounds.height/2);
        prompt.setPosition(640, 260);

        Text inputDisplay("", font, 36);
        inputDisplay.setPosition(440, 460);

        string input;

        while(window.isOpen())
        {
            Event event;

            while(window.pollEvent(event))
            {
                if(event.type  == Event::Closed)
                {
                    window.close();
                }

                if(event.type == Event::TextEntered)
                {
                    if(event.text.unicode == '\n' || event.text.unicode == '\r' )
                    {
                        return input;
                    }
                    else if(event.text.unicode == 8 && input.length() > 0)
                    {
                        input.pop_back();
                    }
                    else if(event.text.unicode < 128 && event.text.unicode >= 32)
                    {
                        input += static_cast<char>(event.text.unicode);
                    }
                }
            }

            inputDisplay.setString(input);

            window.clear();
            window.draw(bg);
            window.draw(Title);
            window.draw(prompt);
            window.draw(inputDisplay);
            window.display();
        }
        return input;
    }
    public:
    void HandleUserInputOutput(RenderWindow &window, Player*&players, int numOfPlayers)
    {
        string UID, name, pass;
        Font font;
        if(!font.loadFromFile("Gloomie Saturday.otf"))
        {
            cout << "Error!" << endl;
        }

        Texture backgroundTexture;
        if(!backgroundTexture.loadFromFile("bg.jpg"))
        {
            cout << "Error!" << endl;
        }

        Sprite backgroundSprite;
        backgroundSprite.setTexture(backgroundTexture);

        name = getInput(window, font, "Name", backgroundSprite);
        pass = getInput(window, font, "Password", backgroundSprite);

        if(VerifyPlayer(players, numOfPlayers, name, pass))
        {
            for(int i = 0; i < numOfPlayers; i++)
            {
                if(players[i].getName() == name)
                {
                    HandleMenuInputOutput(window, players[i], players[i].getShop());
                }
            }
        }
        else
        {
            AddPlayer(players, numOfPlayers, to_string(numOfPlayers), name, pass);
            for(int i = 0; i < numOfPlayers; i++)
            {
                if(players[i].getName() == name)
                {
                    HandleMenuInputOutput(window, players[i], players[i].getShop());
                }
            }
        }
    }
    void HandleTrainingInputOutput(RenderWindow &window, Player &player)
    {
        Font font;
        font.loadFromFile("Gloomie Saturday.otf");

        string title = "Le Training Arena";
        Text Title(title, font, 42); 
        FloatRect titleBounds = Title.getLocalBounds();
        Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
        Title.setPosition(640, 50);

        string subtitle = "Choose the Pet You want to Train";
        Text subTitle(subtitle, font, 24); 
        FloatRect subtitleBounds = subTitle.getLocalBounds();
        subTitle.setOrigin(subtitleBounds.width/2, subtitleBounds.height/2);
        subTitle.setPosition(640, 100);

        Sprite backButton;
        Texture backTexture;
        backTexture.loadFromFile("tile052.png");
        backButton.setTexture(backTexture);
        backButton.setPosition(50, 50);
        backButton.setScale(3,3);

        Sprite monster[4];
        Sprite upgradeButtons[16];
        Texture upgradebuttonT;
        Texture monsterT[4];
        Text monsterNames[4];
        Text upgradeTexts[16];

        Text monsterHp[4];
        Text monsterAtk[4];
        Text monsterDef[4];
        Text monsterSpeed[4];
        Text monsterTrainingPoints[4];

        upgradebuttonT.loadFromFile("tile028.png");

        for(int i = 0; i < 16; i++)
        {
            upgradeTexts[i].setFont(font);
            upgradeTexts[i].setCharacterSize(12);
        }

        for(int i = 0; i < player.getNumOfPets(); i++)
        {
            monsterHp[i].setString("Health: " + to_string(player.getPets()[i]->getHp()));
            monsterAtk[i].setString("Attack: " + to_string(player.getPets()[i]->getAtk()));
            monsterDef[i].setString("Defense: " + to_string(player.getPets()[i]->getDef()));
            monsterSpeed[i].setString("Speed: " + to_string(player.getPets()[i]->getSpd()));

            monsterHp[i].setFont(font);
            monsterAtk[i].setFont(font);
            monsterDef[i].setFont(font);
            monsterSpeed[i].setFont(font);

            monsterHp[i].setCharacterSize(11);
            monsterAtk[i].setCharacterSize(11);
            monsterDef[i].setCharacterSize(11);
            monsterSpeed[i].setCharacterSize(11);

            monsterHp[i].setPosition(235 + 230*i, 460);
            monsterAtk[i].setPosition(315 + 230*i, 460);
            monsterDef[i].setPosition(235 + 230*i, 480);
            monsterSpeed[i].setPosition(315 + 230*i, 480);

            upgradeTexts[0 + 4*i].setString("Health ");
            upgradeTexts[1  + 4*i].setString("Attack ");
            upgradeTexts[2  + 4*i].setString("Defense");
            upgradeTexts[3  + 4*i].setString("Speed  ");

            monsterTrainingPoints[i].setString("Points: " + to_string(player.getPets()[i]->getTrainingPoints()));
            for(int j = 0; j < 4; j++)
            {
                upgradeButtons[j + 4*i].setTexture(upgradebuttonT);
                upgradeButtons[j + 4*i].setPosition(350 + 230*i, 540 + 20*j);
                upgradeTexts[j + 4*i].setPosition(220 + 230*i, 540 + 20*j);
            }
        }

        for(int i = 0; i < 4; i++)
        {
            monsterNames[i].setString("");
        }

        for(int i = 0; i < player.getNumOfPets(); i++)
        {
            if(player.getPets()[i] != nullptr)
            {
                monsterNames[i].setString(player.getPets()[i][0].getName());
                if(player.getPets()[i][0].getName() == "Dragon")
                {
                    monsterT[i].loadFromFile("tile006.png");
                    monster[i].setScale(1.1, 1.1);
                }
                else if(player.getPets()[i][0].getName() == "Unicorn")
                {
                    monsterT[i].loadFromFile("Unicorn1.png");
                    monster[i].setScale(1.75, 1.75);
                }
                else if(player.getPets()[i][0].getName() == "Griffin")
                {
                    monsterT[i].loadFromFile("Griffin1.png");
                    monster[i].setScale(2.3, 2.3);
                }
                else if(player.getPets()[i][0].getName() == "Pheonix")
                {
                    monsterT[i].loadFromFile("pheonix1.png");
                    monster[i].setScale(2.6, 2.6);
                }
            }
        }

        for(int i = 0; i < 4; i++)
        {
            monster[i].setTexture(monsterT[i]);
            monster[i].setPosition(300 + 150*i, 375);

            FloatRect bounds = monsterNames[i].getGlobalBounds();
            monsterNames[i].setOrigin(bounds.width/2, bounds.height/2);
            monsterNames[i].setFont(font);
            monsterNames[i].setCharacterSize(24);
            monsterNames[i].setPosition(255 + 230*i, 415);

            bounds = monsterTrainingPoints[i].getGlobalBounds();
            monsterTrainingPoints[i].setOrigin(bounds.width/2, bounds.height/2);
            monsterTrainingPoints[i].setFont(font);
            monsterTrainingPoints[i].setCharacterSize(12);
            monsterTrainingPoints[i].setPosition(265 + 230*i, 500);
        }

        monster[0].setPosition(200,250);
        monster[1].setPosition(455,250);
        monster[2].setPosition(705,250);
        monster[3].setPosition(955,250);


        Sprite buttonS[5];
        Texture buttonT[5];
        for(int i = 0; i < 5; i++)
        {
            buttonT[i].loadFromFile("MonsterHolder.png");
            buttonS[i].setTexture(buttonT[i]);
            buttonS[i].setPosition(120 + 230*i, 160);
            buttonS[i].setScale(1, 1);
        }

        Texture backgroundTexture;
        backgroundTexture.loadFromFile("shopbg.jpg");

        Sprite backgroundSprite;
        backgroundSprite.setTexture(backgroundTexture);

        Clock clock;
        float frameTime = 0.1f;

        while(window.isOpen())
        {
            float elapsedTime = clock.getElapsedTime().asSeconds();

            Event event;
            while(window.pollEvent(event))
            {
                if(event.type  == Event::Closed)
                {
                    window.close();
                }
                if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                {
                    Vector2i mousePosition = Mouse::getPosition(window);

                    FloatRect buttonBounds[5];
                    for(int i = 0; i < 5; i++)
                    {
                        buttonBounds[i] = buttonS[i].getGlobalBounds();
                    }
                    if(buttonBounds[0].contains(mousePosition.x, mousePosition.y))
                    {
                        if(player.getNumOfPets() > 0)
                        {
                            player.getCourse().Train(player.getPets()[0], window);
                        }
                    }
                    else if(buttonBounds[1].contains(mousePosition.x, mousePosition.y))
                    {
                        if(player.getNumOfPets() > 1)
                        {
                            player.getCourse().Train(player.getPets()[1], window);
                        }
                    }
                    else if(buttonBounds[2].contains(mousePosition.x, mousePosition.y))
                    {
                        if(player.getNumOfPets() > 2)
                        {
                            player.getCourse().Train(player.getPets()[2], window);
                        }
                    }
                    else if(buttonBounds[3].contains(mousePosition.x, mousePosition.y))
                    {
                        if(player.getNumOfPets() > 3)
                        {
                            player.getCourse().Train(player.getPets()[3], window);
                        } 
                    }

                    FloatRect upgradeButtonBounds[16];

                    for(int i = 0; i < 16; i++)
                    {
                        upgradeButtonBounds[i] = upgradeButtons[i].getGlobalBounds();
                    }

                    for(int i = 0; i < player.getNumOfPets(); i++)
                    {
                        if(player.getPets()[i]->getTrainingPoints() > 0)
                        {
                            if(upgradeButtonBounds[0 + 4*i].contains(mousePosition.x, mousePosition.y))
                             {
                                player.getPets()[i]->setHp(player.getPets()[i]->getHp() + 5);
                                player.getPets()[i]->setTrainingPoints(player.getPets()[i]->getTrainingPoints() - 1);
                                break;
                            }
                            else if(upgradeButtonBounds[1 + 4*i].contains(mousePosition.x, mousePosition.y))
                            {
                                player.getPets()[i]->setAtk(player.getPets()[i]->getAtk() + 5);
                                player.getPets()[i]->setTrainingPoints(player.getPets()[i]->getTrainingPoints() - 1);
                                break;
                            }
                            else if(upgradeButtonBounds[2 + 4*i].contains(mousePosition.x, mousePosition.y))
                            {
                                player.getPets()[i]->setDef(player.getPets()[i]->getDef() + 5);
                                player.getPets()[i]->setTrainingPoints(player.getPets()[i]->getTrainingPoints() - 1);
                                break;
                            }
                            else if(upgradeButtonBounds[3 + 4*i].contains(mousePosition.x, mousePosition.y))
                            {
                                player.getPets()[i]->setSpd(player.getPets()[i]->getSpd() + 5);
                                player.getPets()[i]->setTrainingPoints(player.getPets()[i]->getTrainingPoints() - 1);
                                break;
                            }
                        }
                    }

                    FloatRect backButtonBounds;
                    backButtonBounds = backButton.getGlobalBounds();
                    if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                    {
                        HandleMenuInputOutput(window, player, player.getShop());
                    }
                }
            }

            for(int i = 0; i < player.getNumOfPets(); i++)
            {
                monsterHp[i].setString("Health: " + to_string(player.getPets()[i]->getHp()));
                monsterAtk[i].setString("Attack: " + to_string(player.getPets()[i]->getAtk()));
                monsterDef[i].setString("Defense: " + to_string(player.getPets()[i]->getDef()));
                monsterSpeed[i].setString("Speed: " + to_string(player.getPets()[i]->getSpd()));
                monsterTrainingPoints[i].setString("Points: " + to_string(player.getPets()[i][0].getTrainingPoints()));
                for(int j = 0; j < 4; j++)
                {
                    upgradeButtons[j + 4*i].setTexture(upgradebuttonT);
                }
            }

            window.clear();
            window.draw(backgroundSprite);
            window.draw(Title);
            window.draw(subTitle);
            for(int i = 0; i < player.getNumOfPets(); i++)
            {
                window.draw(buttonS[i]);
                window.draw(monster[i]);
                window.draw(monsterNames[i]);
                window.draw(monsterHp[i]);
                window.draw(monsterAtk[i]);
                window.draw(monsterDef[i]);
                window.draw(monsterSpeed[i]);
                window.draw(monsterTrainingPoints[i]);
                if(player.getPets()[i]->getTrainingPoints() > 0)
                {
                    for(int j = 0; j < 4; j++)
                    {
                        window.draw(upgradeButtons[j + 4*i]);
                        window.draw(upgradeTexts[j + 4*i]);
                    }
                }
            }
            window.draw(backButton);
            window.display();
        }
    }
    void HandleAdoptionInputOutput(RenderWindow &window, Player &player)
    {
        Font font;
        font.loadFromFile("Gloomie Saturday.otf");

        string title = "Le Adoption Station";
        Text Title(title, font, 42); 
        FloatRect titleBounds = Title.getLocalBounds();
        Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
        Title.setPosition(640, 50);

        string subtitle = "Choose Wisely! You only get to pick 4 once";
        Text subTitle(subtitle, font, 36); 
        FloatRect subtitleBounds = subTitle.getLocalBounds();
        subTitle.setOrigin(subtitleBounds.width/2, subtitleBounds.height/2);
        subTitle.setPosition(640, 250);

        Sprite backButton;
        Texture backTexture;
        backTexture.loadFromFile("tile052.png");
        backButton.setTexture(backTexture);
        backButton.setPosition(50, 50);
        backButton.setScale(3,3);

        Sprite inventorybg[4];
        Texture inventoryBg[4];
        for(int i = 0; i < 4; i++)
        {
            inventoryBg[i].loadFromFile("tile004.png");
            inventorybg[i].setTexture(inventoryBg[i]);
            inventorybg[i].setPosition(50, 170 + 100*i);
            inventorybg[i].setScale(5, 5);
        }


        Sprite monster[4];
        Texture monsterT[4];
        Text monsterNames[4];

        Pet *petptr[4];

        petptr[0] = new Dragon();
        petptr[1] = new Unicorn();
        petptr[2] = new Griffin();
        petptr[3] = new Pheonix();

        Text monsterHp[4];
        Text monsterAtk[4];
        Text monsterDef[4];
        Text monsterSpeed[4];

        for(int i = 0; i < 4; i++)
        {
            monsterHp[i].setString("Health: " + to_string(petptr[i][0].getHp()));
            monsterAtk[i].setString("Attack: " + to_string(petptr[i][0].getAtk()));
            monsterDef[i].setString("Defense: " + to_string(petptr[i][0].getDef()));
            monsterSpeed[i].setString("Speed: " + to_string(petptr[i][0].getSpd()));

            monsterHp[i].setFont(font);
            monsterAtk[i].setFont(font);
            monsterDef[i].setFont(font);
            monsterSpeed[i].setFont(font);

            monsterHp[i].setCharacterSize(11);
            monsterAtk[i].setCharacterSize(11);
            monsterDef[i].setCharacterSize(11);
            monsterSpeed[i].setCharacterSize(11);

            monsterHp[i].setPosition(260 + 230*i, 460);
            monsterAtk[i].setPosition(340 + 230*i, 460);
            monsterDef[i].setPosition(260 + 230*i, 480);
            monsterSpeed[i].setPosition(340 + 230*i, 480);
        }

        monsterT[0].loadFromFile("tile006.png");
        monsterT[1].loadFromFile("Unicorn1.png");
        monsterT[2].loadFromFile("Griffin1.png");
        monsterT[3].loadFromFile("pheonix1.png");

        for(int i = 0; i < 4; i++)
        {
            monster[i].setTexture(monsterT[i]);
            monster[i].setPosition(300 + 150*i, 375);

            FloatRect bounds = monsterNames[i].getGlobalBounds();
            monsterNames[i].setOrigin(bounds.width/2, bounds.height/2);
            monsterNames[i].setFont(font);
            monsterNames[i].setCharacterSize(24);
            monsterNames[i].setPosition(280 + 230*i, 415);
        }

        monster[0].setScale(1.1, 1.1);
        monster[0].setPosition(220,250);

        monster[1].setScale(1.75, 1.75);
        monster[1].setPosition(475,250);

        monster[2].setScale(2.3, 2.3);
        monster[2].setPosition(725,275);

        monster[3].setScale(2.6, 2.6);
        monster[3].setPosition(975,275);


        monsterNames[0].setString("Dragon");
        monsterNames[1].setString("Unicorn");
        monsterNames[2].setString("Griffin");
        monsterNames[3].setString("Pheonix");


        Sprite buttonS[5];
        Texture buttonT[5];
        for(int i = 0; i < 5; i++)
        {
            buttonT[i].loadFromFile("MonsterHolder.png");
            buttonS[i].setTexture(buttonT[i]);
            buttonS[i].setPosition(150 + 230*i, 160);
            buttonS[i].setScale(1, 1);
        }

        Texture backgroundTexture;
        backgroundTexture.loadFromFile("shopbg.jpg");

        Sprite backgroundSprite;
        backgroundSprite.setTexture(backgroundTexture);
        int directioni = 1, directionj = 1;
        int i = 6, j = 1, k = 1;

        Clock clock;
        float frameTime = 0.1f;

        Sprite playerPetsS[5];
        Texture playerPetsT[5];

        for(int i = 0; i < player.getNumOfPets(); i++)
        {
            if(player.getPets()[i] != nullptr)
            {
                if(player.getPets()[i][0].getName() == "Dragon")
                {
                    playerPetsT[i].loadFromFile("tile006.png");
                    playerPetsS[i].setScale(0.6, 0.6);
                }
                else if(player.getPets()[i][0].getName() == "Unicorn")
                {
                    playerPetsT[i].loadFromFile("Unicorn1.png");
                    playerPetsS[i].setScale(0.875, 0.875);
                }
                else if(player.getPets()[i][0].getName() == "Griffin")
                {
                    playerPetsT[i].loadFromFile("Griffin1.png");
                    playerPetsS[i].setScale(1.15, 1.15);
                }
                else if(player.getPets()[i][0].getName() == "Pheonix")
                {
                    playerPetsT[i].loadFromFile("pheonix1.png");
                    playerPetsS[i].setScale(1.3, 1.3);
                }
                playerPetsS[i].setTexture(playerPetsT[i]);
                playerPetsS[i].setPosition(50, 170 + 100*i);
            }
        }


        while(window.isOpen())
        {
            float elapsedTime = clock.getElapsedTime().asSeconds();
            if(elapsedTime >= frameTime)
            {
                monsterT[0].loadFromFile("tile00" + to_string(i) + ".png");
                monsterT[1].loadFromFile("Unicorn" + to_string(j) + ".png");
                monsterT[2].loadFromFile("Griffin" + to_string(j) + ".png");
                monsterT[3].loadFromFile("pheonix" + to_string(k) + ".png");

                monster[0].setTexture(monsterT[0]);
                monster[1].setTexture(monsterT[1]);
                monster[2].setTexture(monsterT[2]);
                monster[3].setTexture(monsterT[3]);
                i += directioni;
                j++;
                k++;

                if(i >= 8)
                {
                    directioni = -1;
                }
                if(i <= 6)
                {
                    directioni = 1;
                }

                if(j >= 5)
                {
                    j = 1;
                }

                if(k >= 4)
                {
                    k = 1;
                }
                clock.restart();
            }

            for(int i = 0; i < player.getNumOfPets(); i++)
            {
                if(player.getPets()[i] != nullptr)
                {
                    if(player.getPets()[i][0].getName() == "Dragon")
                    {
                        playerPetsT[i].loadFromFile("tile006.png");
                        playerPetsS[i].setScale(0.6, 0.6);
                        playerPetsS[i].setPosition(50, 200 + 100*i);
                    }
                    else if(player.getPets()[i][0].getName() == "Unicorn")
                    {
                        playerPetsT[i].loadFromFile("Unicorn1.png");
                        playerPetsS[i].setScale(0.875, 0.875);
                        playerPetsS[i].setPosition(70, 200 + 100*i);
                    }
                    else if(player.getPets()[i][0].getName() == "Griffin")
                    {
                        playerPetsT[i].loadFromFile("Griffin1.png");
                        playerPetsS[i].setScale(1.15, 1.15);
                        playerPetsS[i].setPosition(70, 200 + 100*i);
                    }
                    else if(player.getPets()[i][0].getName() == "Pheonix")
                    {
                        playerPetsT[i].loadFromFile("pheonix1.png");
                        playerPetsS[i].setScale(1.6, 1.6);
                        playerPetsS[i].setPosition(90, 200 + 100*i);
                    }
                    playerPetsS[i].setTexture(playerPetsT[i]);
                }
            }   
            Event event;
            while(window.pollEvent(event))
            {
                if(event.type  == Event::Closed)
                {
                    window.close();
                }
                if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                {
                    Vector2i mousePosition = Mouse::getPosition(window);

                    FloatRect buttonBounds[5];
                    for(int i = 0; i < 5; i++)
                    {
                        buttonBounds[i] = buttonS[i].getGlobalBounds();
                    }
                    if(buttonBounds[0].contains(mousePosition.x, mousePosition.y))
                    {
                        Pet* ptr = new Dragon();
                        player.AdoptPet(ptr);  
                    }
                    else if(buttonBounds[1].contains(mousePosition.x, mousePosition.y))
                    {
                        Pet* ptr = new Unicorn();
                        player.AdoptPet(ptr);    
                    }
                    else if(buttonBounds[2].contains(mousePosition.x, mousePosition.y))
                    {
                        Pet* ptr = new Griffin();
                        player.AdoptPet(ptr);
                    }
                    else if(buttonBounds[3].contains(mousePosition.x, mousePosition.y))
                    {
                        Pet* ptr = new Pheonix();
                        player.AdoptPet(ptr);
                    }

                    FloatRect backButtonBounds;
                    backButtonBounds = backButton.getGlobalBounds();
                    if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                    {
                        HandleMenuInputOutput(window, player, player.getShop());
                    }
                }
            }

            window.clear();
            window.draw(backgroundSprite);
            window.draw(Title);
            for(int i = 0; i < 4; i++)
            {
                window.draw(buttonS[i]);
                window.draw(monster[i]);
                window.draw(monsterNames[i]);

                window.draw(monsterHp[i]);
                window.draw(monsterAtk[i]);
                window.draw(monsterDef[i]);
                window.draw(monsterSpeed[i]);
                window.draw(inventorybg[i]);
            }
            for(int i = 0; i < player.getNumOfPets(); i++)
            {
                window.draw(playerPetsS[i]);
            }
            window.draw(backButton);
            window.display();
        }
    }
    void HandleShopInputOutput(RenderWindow &window, Player &player, Shop &shop)
    {
        Font font;
        font.loadFromFile("Gloomie Saturday.otf");

        string title = "Le Item Shop";
        Text Title(title, font, 42); 
        FloatRect titleBounds = Title.getLocalBounds();
        Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
        Title.setPosition(640, 50);

        string subtitle = "20 Currency Points Each Item";
        Text subTitle(subtitle, font, 36); 
        FloatRect subtitleBounds = subTitle.getLocalBounds();
        subTitle.setOrigin(subtitleBounds.width/2, subtitleBounds.height/2);
        subTitle.setPosition(640, 250);

        string playerPoints = "Player Currency";
        Text PlayerPoints(playerPoints, font, 36);
        FloatRect pointsBounds = PlayerPoints.getLocalBounds();
        PlayerPoints.setOrigin(pointsBounds.width/2, pointsBounds.height/2);
        PlayerPoints.setPosition(1040, 150);

        string playerMoney = to_string(player.getPoints());
        Text PlayerMoney(playerMoney, font, 36);
        FloatRect moneyBounds = PlayerMoney.getLocalBounds();
        PlayerMoney.setOrigin(moneyBounds.width/2, moneyBounds.height/2);
        PlayerMoney.setPosition(1040, 190);

        Sprite backButton;
        Texture backTexture;
        backTexture.loadFromFile("tile052.png");
        backButton.setTexture(backTexture);
        backButton.setPosition(50, 50);
        backButton.setScale(3,3);

        Sprite inventorybg[5];
        Sprite inventory[5];
        Texture inventoryBg[5];
        Texture Inventory[5];
        Text InventoryItems[5];
        Text ItemNames[5];
        for(int i = 0; i < 5; i++)
        {
            InventoryItems[i].setString(to_string(player.getItems()[i]));
            InventoryItems[i].setFont(font);
            InventoryItems[i].setCharacterSize(24);
            InventoryItems[i].setPosition(130, 190 + 100*i);

            Inventory[i].loadFromFile(to_string(i + 1) + ".png");
            inventory[i].setTexture(Inventory[i]);
            inventory[i].setPosition(130, 190 + 100*i);
            inventory[i].setScale(1, 1);

            inventoryBg[i].loadFromFile("tile004.png");
            inventorybg[i].setTexture(inventoryBg[i]);
            inventorybg[i].setPosition(100, 150 + 100*i);
            inventorybg[i].setScale(5, 5);
        }

        ItemNames[0].setString("Health");
        ItemNames[1].setString(" Mana ");
        ItemNames[2].setString("Shield");
        ItemNames[3].setString("Speed ");
        ItemNames[4].setString("Attack");

        Sprite buttonS[5];
        Texture buttonT[5];
        for(int i = 0; i < 5; i++)
        {
            buttonT[i].loadFromFile(to_string(i + 1) + ".png");
            buttonS[i].setTexture(buttonT[i]);
            buttonS[i].setPosition(290 + 150*i, 360);
            buttonS[i].setScale(1.5, 1.5);

            FloatRect bounds = ItemNames[i].getGlobalBounds();
            ItemNames[i].setOrigin(bounds.width/2, bounds.height/2);
            ItemNames[i].setFont(font);
            ItemNames[i].setCharacterSize(24);
            ItemNames[i].setPosition(300 + 150*i, 475);
        }

        Texture backgroundTexture;
        backgroundTexture.loadFromFile("shopbg.jpg");

        Sprite backgroundSprite;
        backgroundSprite.setTexture(backgroundTexture);

        while(window.isOpen())
        {
            Event event;

            while(window.pollEvent(event))
            {
                if(event.type  == Event::Closed)
                {
                    window.close();
                }
                if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                {
                    Vector2i mousePosition = Mouse::getPosition(window);

                    FloatRect buttonBounds[5];
                    for(int i = 0; i < 5; i++)
                    {
                        buttonBounds[i] = buttonS[i].getGlobalBounds();
                    }
                    if(buttonBounds[0].contains(mousePosition.x, mousePosition.y))
                    {
                        shop.AddItem(player.getItems(), shop.getItems()[0][0],player.getPoints());
                        InventoryItems[0].setString(to_string(player.getItems()[0]));
                    }
                    else if(buttonBounds[1].contains(mousePosition.x, mousePosition.y))
                    {
                        shop.AddItem(player.getItems(), shop.getItems()[1][0],player.getPoints());
                        InventoryItems[1].setString(to_string(player.getItems()[1]));
                    }
                    else if(buttonBounds[2].contains(mousePosition.x, mousePosition.y))
                    {
                        shop.AddItem(player.getItems(), shop.getItems()[2][0],player.getPoints());
                        InventoryItems[2].setString(to_string(player.getItems()[2]));
                    }
                    else if(buttonBounds[3].contains(mousePosition.x, mousePosition.y))
                    {
                        shop.AddItem(player.getItems(), shop.getItems()[3][0],player.getPoints());
                        InventoryItems[3].setString(to_string(player.getItems()[3]));
                    }
                    else if(buttonBounds[4].contains(mousePosition.x, mousePosition.y))
                    {
                        shop.AddItem(player.getItems(), shop.getItems()[4][0],player.getPoints());
                        InventoryItems[4].setString(to_string(player.getItems()[4]));
                    }

                    playerMoney = to_string(player.getPoints());
                    PlayerMoney.setString(playerMoney);

                    FloatRect backButtonBounds;
                    backButtonBounds = backButton.getGlobalBounds();
                    if(backButtonBounds.contains(mousePosition.x, mousePosition.y))
                    {
                        HandleMenuInputOutput(window, player, shop);
                    }
                }
            }

            window.clear();
            window.draw(backgroundSprite);
            window.draw(Title);
            window.draw(PlayerPoints);
            window.draw(PlayerMoney);
            for(int i = 0; i < 5; i++)
            {
                window.draw(inventorybg[i]);
                window.draw(inventory[i]);
                window.draw(InventoryItems[i]);
                window.draw(buttonS[i]);
                window.draw(ItemNames[i]);
            }
            window.draw(backButton);
            window.display();
        }
    }
    void HandleMenuInputOutput(RenderWindow &window, Player &player, Shop &shop)
    {
        int numOfButtons = 5;
        Font font;
        font.loadFromFile("Gloomie Saturday.otf");

        string title = "Magical Pets Kingdom";
        Text Title(title, font, 42); 
        FloatRect titleBounds = Title.getLocalBounds();
        Title.setOrigin(titleBounds.width/2, titleBounds.height/2);
        Title.setPosition(640, 50);

        Sprite buttons[numOfButtons];
        Texture buttonsT[numOfButtons];
        for(int i = 0; i < numOfButtons; i++)
        {
            buttonsT[i].loadFromFile("MainButton" + to_string(i + 1) + ".png");
            buttons[i].setTexture(buttonsT[i]);
            buttons[i].setPosition(590, 160 + 100*i);
            buttons[i].setScale(0.1, 0.1);
        }

        Texture backgroundTexture;
        backgroundTexture.loadFromFile("bg.jpg");

        Sprite backgroundSprite;
        backgroundSprite.setTexture(backgroundTexture);

        while(window.isOpen())
        {
            Event event;

            while(window.pollEvent(event))
            {
                if(event.type  == Event::Closed)
                {
                    window.close();
                }
                if(event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                {
                    Vector2i mousePosition = Mouse::getPosition(window);
                    for(int i = 0; i < numOfButtons; i++)
                    {
                        FloatRect buttonBounds = buttons[i].getGlobalBounds();
                        if(buttonBounds.contains(mousePosition.x, mousePosition.y))
                        {
                            switch(i)
                            {
                                case 0:
                                {

                                    break;
                                }
                                case 1:
                                {
                                    HandleTrainingInputOutput(window, player);
                                    break;
                                }
                                case 2:
                                {
                                    HandleAdoptionInputOutput(window, player);
                                    break;
                                }
                                case 3:
                                {
                                    HandleShopInputOutput(window, player, player.getShop());
                                    break;
                                }
                                case 4:
                                {

                                    break;
                                }
                            }
                        }
                    }
                }
            }

            window.clear();
            window.draw(backgroundSprite);
            window.draw(Title);
            for(int i = 0; i < numOfButtons; i++)
            {
                window.draw(buttons[i]);
            }
            window.display();
        }
    }
};

class MainMenu{
    private:    
        string status;
        Texture bgT;
        Sprite bgS;
    public:
        MainMenu(string stat = "NULL")
        {
            bgT.loadFromFile("bg.jpg");
            status = stat;
        }
        void Shop(IO io)
        {
            status = "Shop";
        }

};

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Magical Pets Kingdom", sf::Style::Titlebar | sf::Style::Close);

    IO inputOutput;
    MainMenu mainmenu("MainMenu");
    int numOfPlayers = 0;
    Player* players = new Player[numOfPlayers];
    inputOutput.HandleUserInputOutput(window, players, numOfPlayers);
    return 0;
}
