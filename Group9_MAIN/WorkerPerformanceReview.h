#pragma once
class WorkerPerformanceReview
{
private:
	double m_Hours[365], m_PayRate;
	std::string m_SupervisorComment;
public:
	WorkerPerformanceReview();
	~WorkerPerformanceReview();
	WorkerPerformanceReview(double Pay, std::string SupComment);

	// No Getter or setter for hours because those are included in the attendance function

	void SetSupervisorComment(std::string SPC) { m_SupervisorComment = SPC; };
	std::string GetSupervisorComment() { return m_SupervisorComment; };

	double PayCalculator(double m_Hours[], double PayRate);

	void Attendance(double m_Hours[]);
};

