class Car{
    private:     
    int m_migration; 
    protected:
    double m_fuel;       
public:  
   virtual void move(int speed)=0; 
    double supply(double fuel,double MaxFuel);
};