
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
static void check_and_alert(float, alerter_funcptr[], Stats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
