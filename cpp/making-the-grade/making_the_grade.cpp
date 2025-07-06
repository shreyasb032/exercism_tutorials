#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> student_scores_int;
    for (double score : student_scores) {
        student_scores_int.emplace_back(static_cast<int>(score));
    }
    return student_scores_int;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int score : student_scores) {
        if (score <= 40) count++;
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grade_thresholds;
    int bin_size = static_cast<int> (highest_score - 40) / 4;
    grade_thresholds[0] = 41;
    grade_thresholds[1] = grade_thresholds[0] + bin_size;
    grade_thresholds[2] = grade_thresholds[1] + bin_size;
    grade_thresholds[3] = grade_thresholds[2] + bin_size;
    return grade_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> out;
    int num_students = student_names.size();
    for (int i = 0; i < num_students; i++) {
        std::string formatted_str = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        out.emplace_back(formatted_str);
    }
    return out;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    int num_students = student_scores.size();
    for (int i = 0; i < num_students; i++) {
        if (student_scores[i] == 100) return student_names[i];
    }
    return "";
}
