// Given a value N, return the corresponding row from Pascal's triangle as an array

// N      Array
// ----------------------
// 0 => [1]
// 1 => [1, 1]
// 2 => [1, 2, 1]
// 3 => [1, 3, 3, 1]
// 4 => [1, 4, 6, 4, 1]

function pascals(numRows) {
    if (numRows === 0) return [];
    if (numRows === 1) return [[1]];
    let result = [];
    for (let row = 1; row <= numRows; row++) {
        let arr = [];
        for (let col = 0; col < row; col++) {
            if (col === 0 || col === row - 1) {
                arr.push(1);
            } else {
                arr.push((result[row-2][col-1] + result[row-2][col]));
            }
        }
        result.push(arr);
    }
    return result;
}
console.table(pascals(4))
console.log(pascals(4))