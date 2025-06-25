// Function to generate random number between min and max (inclusive)
function getRandomNumber(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

// Generate random numbers and operation
function generateProblem() {
    let x = getRandomNumber(1, 10);
    let y = getRandomNumber(1, 10);
    let operation = getRandomNumber(1, 4);
    
    return { x, y, operation };
}
