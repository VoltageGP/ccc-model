class CID{
	std::string value;
	double balance( Student );
}

class Teacher{
	CID id;
}

class Major{
	std::string tbd;
}

class Study{
	std::string field;
}

class Credit{
}

class Course{
	Teacher instruct;
	Study subject;
	Credit cred;
	int capacity;
	double grade;
}

class Student{
	CID id;
	Course schedule;
	void regCourse( );
	void regCourse( Advisor );
	void drop( Course );
	double getGPA( Course );
}


