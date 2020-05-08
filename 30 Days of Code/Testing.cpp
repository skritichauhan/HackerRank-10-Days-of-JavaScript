

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int>v {};
        return v;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int>v{10,20,30};
        return v;
    }

    static int get_expected_result() {
        // complete this function
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int>v{2,2,4,30,4,24};
        return v;
    }

    static int get_expected_result() {
        // complete this function
        vector<int>v=get_array();
        return 0;
    }

};

