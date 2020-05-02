

/* Define the exception here */
class BadLengthException{
    int n;
    public:
    BadLengthException(int error) {
            n = error;
        }
    int what()
    {
        return n;
    }
};
