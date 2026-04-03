// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    double rate;
    if(balance < 0.0){
          rate = 3.213;
    }
    else if(balance >= 0.0 && balance < 1000.0){
        rate = 0.5;
    }
    else if(balance >= 1000.0 && balance < 5000.0){
        rate = 1.621;
    }
    else{
        rate = 2.475;
    }
    return rate;
    
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    double yi = interest_rate(balance) * balance / 100.0;
    return yi;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    double new_balance = yearly_interest(balance) + balance;
    return new_balance;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    double dinamicBalance = balance;
    int years = 0;
    while(dinamicBalance < target_balance){
        years++;
        dinamicBalance = annual_balance_update(dinamicBalance);
    }
    return years;
}
