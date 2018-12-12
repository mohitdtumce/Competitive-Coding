function getCount(objects) {
    let count = 0;
    for (let i = 0; i < objects.length; i++) {
        if (objects[i].x === objects[i].y) {
            count += 1;
        }
    }   
    return count;
}