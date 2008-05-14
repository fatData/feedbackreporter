#import <Cocoa/Cocoa.h>


@interface FeedbackController : NSWindowController {

    IBOutlet NSTextView *commentView;
    IBOutlet NSTextField *emailField;

    IBOutlet NSTabView *tabView;

    BOOL showDetails;

    IBOutlet NSTextView *systemView;
    IBOutlet NSTextView *consoleView;
    IBOutlet NSTextView *crashesView;
    IBOutlet NSTextView *preferencesView;

    IBOutlet NSProgressIndicator *indicator;

    IBOutlet NSButton *cancelButton;
    IBOutlet NSButton *sendButton;

    NSString *user;
}

- (id) initWithUser:(NSString*)user;

- (NSString*) applicationName;
- (NSString*) applicationVersion;

- (IBAction)showDetails:(id)sender;

- (IBAction)cancel:(id)sender;
- (IBAction)send:(id)sender;

@end
