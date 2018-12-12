function isVowel(a){
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return true;
    }
    return false; 
}
function vowelsAndConsonants(s) {
    for (let i = 0; i < s.length; i++) {
        if (isVowel(s[i])) {
            console.log(s[i]);
        }
    } 
    
    for (let i = 0; i < s.length; i++) {
        if (!isVowel(s[i])) {
            console.log(s[i]);
        }
    } 
}

vowelsAndConsonants("javascriptloops");