#import <UIKit/UIKit.h>

/**
 *  This default delegate can be used for easy debugging on any `UIWebView`.
 */
@interface BSGWebViewDelegate : NSObject<UIWebViewDelegate>

/**
 *  A spinner being animated automatically when the web view is loading content.
 *
 *  This property must be assigned by the user.
 *  // TODO Not sure this is a good design
 */
@property (nonatomic, weak) UIActivityIndicatorView *spinner;

/**
 *  An error alert delegate.
 *
 *  When a connection fails because there's no internet connection available, 
 *  a UIAlertView is shown. If this property is set, it will be used as
 *  the UIAlertView's delegate.
 *
 *  TODO: not sure this is a good design either.
 */
@property (nonatomic, weak) id<UIAlertViewDelegate> errorAlertDelegate;

@end
