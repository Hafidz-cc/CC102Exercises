void grade(int* arr, int row, int col){
    int* ptr = arr;

    int highest = 0;

    
    for(int i = 0; i < row; i++){
        cout << "Student " << char('A' + i) << endl;
        for(int j = 0; j < col; j++){
            cout << "Enter grade for subject " << j+1 << ": ";
            cin >> *(ptr + i * col + j);

            
            if(*(ptr + i * col + j) > highest){
                highest = *(ptr + i * col + j);
            }
        }
        cout << endl;
    }

    
    for(int i = 0; i < row; i++){
        int sum = 0; 

        cout << "Student " << char('A' + i) << " grades: ";

        for(int j = 0; j < col; j++){
            int grade = *(ptr + i * col + j);
            cout << grade << " ";
            sum += grade;
        }

        double avg = (double)sum / col;

        cout << "  Average: " << avg << endl;
    }

    
    cout << "Highest grade in the matrix: " << highest << endl;
}