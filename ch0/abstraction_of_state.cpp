class Date {
    public:
        enum Month {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov,dec};
    Month GetMonth() const; // GetMonth returns some data of type month; and that value is constant?
    int GetYear() const; 
    int GetDayOfMonth() const;
    
    private:
        Month   itsMonth;
        int     itsYear;
        int     itsDayOfMonth;

}