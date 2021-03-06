/* ReportCrash-Structs.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

typedef struct _CSTypeRef {
	unsigned _field1;
	unsigned _field2;
} CSTypeRef;

typedef struct _merged_stack_frame {
	struct merged_stack_frame* _field1;
	struct merged_stack_frame* _field2;
	unsigned long long _field3;
	unsigned _field4 : 31;
	unsigned _field5 : 1;
} merged_stack_frame;

typedef struct __aslmsg aslmsg;

typedef struct memorystatus_kernel_stats {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	unsigned _field9;
	unsigned _field10;
	unsigned long long _field11;
	unsigned long long _field12;
	unsigned long long _field13;
} memorystatus_kernel_stats;

typedef struct jetsam_snapshot_entry {
	int _field1;
	BOOL _field2[17];
	int _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned long long _field8;
	unsigned char _field9[16];
	unsigned _field10;
} jetsam_snapshot_entry;

typedef struct jetsam_snapshot {
	unsigned long long _field1;
	unsigned long long _field2;
	memorystatus_kernel_stats _field3;
	unsigned _field4;
	jetsam_snapshot_entry _field5[0];
} jetsam_snapshot;

typedef struct memorystatus_priority_entry {
	int _field1;
	int _field2;
	unsigned long long _field3;
	int _field4;
	unsigned _field5;
} memorystatus_priority_entry;
