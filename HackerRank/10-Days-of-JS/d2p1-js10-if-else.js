function getGrade(score) {
    let grade;
    if (score > 25) {
        grade = 'A';
    } else if (score > 20){
        grade = 'B';
    } else if (score > 15) {
        grade = 'C';
    } else if (score > 10) {
        grade = 'D';
    } else if (score > 5) {
        grade = 'E';
    } else{
        grade = 'F';
    }
    
    return grade;
}