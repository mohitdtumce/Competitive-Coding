function getMaxLessThanK(n, k) {
    let res = 0;
    for (let i = 1; i <= n; i++) {
        for (let j = i + 1; j <= n; j++) {
            if ((i & j) < k) {
                res = Math.max(res, i & j);
            }
        }
    }
    return res;
}

getMaxLessThanK(9, 2);
getMaxLessThanK(8, 3);
getMaxLessThanK(5, 2);
getMaxLessThanK(8, 5);
getMaxLessThanK(2, 2);
