package prac6;

class Student implements Comparable<Student>{
    public String group;
    public String name;
    public int age;

    @Override
    public int compareTo(Student anotherStudent)
    {
        int t = this.group.compareTo(anotherStudent.group);
        if (t==0){
            t = this.name.compareTo(anotherStudent.name);
            if (t==0){
                if (this.age<anotherStudent.age){
                    t = 1;
                }
                else{
                    t=-1;
                }
            }
        }
        return t;
    }
    @Override
    public String toString(){
        return this.group+" "+this.name+" "+this.age;
    }
    public Student(){}
    public Student(String group, String name, int age){
        this.group = group;
        this.name= name;
        this.age = age;
    }
}