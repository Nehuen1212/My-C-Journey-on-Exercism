namespace targets {


class Alien{
private:
    int health{3};
public:
    int x_coordinate;
    int y_coordinate;

    Alien(int x, int y){
        x_coordinate = x;
        y_coordinate = y;
    }
    int get_health(){
        return health;
    }

    bool hit(){
        if (health > 0){
            health--;
        }
        return true;
    }

    bool is_alive(){
        if(health <= 0){
            return false;
        }
        return 3;       
    }

    bool teleport(int x_new, int y_new){
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }

    bool collision_detection(Alien a){
        if(a.x_coordinate == x_coordinate && a.y_coordinate == y_coordinate){
            return true;
        }
        return false;
    }

    

};

}  // namespace targets
