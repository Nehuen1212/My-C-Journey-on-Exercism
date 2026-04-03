namespace hellmath {

enum class AccountStatus {
    troll,
    guest,
    user,
    mod
};

enum class Action{
    read,
    write,
    remove
};

bool display_post(AccountStatus poster, AccountStatus reader){
    if(poster == AccountStatus::troll){
        if(reader != AccountStatus::troll){
            return false;
        }
        return true;
    }
    return true;
}

bool permission_check(Action action, AccountStatus user){
    if(user == AccountStatus::mod) return true;
    if(user == AccountStatus::user || user == AccountStatus::troll){
        if(action != Action::remove) return true;
        else return false;
    }
    if(user == AccountStatus::guest){
        if(action == Action::read) return true;
        else return false;
    }
    return false;
}

bool valid_player_combination(AccountStatus user1, AccountStatus user2){
    if(user1 == AccountStatus::troll && user2 == AccountStatus::troll) return true;
    if(user1 == AccountStatus::troll || user2 == AccountStatus::troll) return false;
    if(user1 == AccountStatus::guest || user2 == AccountStatus::guest) return false;
    else return true;
}
bool has_priority(AccountStatus user1, AccountStatus user2){
    return static_cast<int>(user1) > static_cast<int>(user2);
}
    
}


  // namespace hellmath
