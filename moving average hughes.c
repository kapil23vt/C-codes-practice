double approxRollingAverage (double avg, double new_sample) {

    avg = avg + (new_sample-avg)/N;

    return avg;
}


// array = 3 4 5
// avg = 4
// newnumber = 4

// since newnumber same as average, avg should be same
// so you will have one term of newnumber - avg
