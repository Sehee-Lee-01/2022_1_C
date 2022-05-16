struct BankAccount{
    int accountNumber;
    int balance;
    double interest_rate;
    double get_interest(int days){
        return (balance*interest_rate)*((double)days/365.0);
    }
    // 모든 멤버가 디폴트로 public이다.
};