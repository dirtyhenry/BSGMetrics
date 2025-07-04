#import <Foundation/Foundation.h>

/**
 *  A collection of extra NSDictionary getters.
 */
@interface NSDictionary (BSGJSONUtils)


/**
 *  Returns the value associated with a given key as a `NSInteger`.
 *
 *  @param key The key for which to return the corresponding value.
 *
 *  @return The value associated with *key*, or `0` if no value is associated with *key*.
 */
- (NSInteger)integerForKey:(NSString *)key;

/**
 *  Returns the value associated with a given key as a boolean.
 *
 *  @param key The key for which to return the corresponding value.
 *
 *  @return The boolean value associated with *key*.
 */
- (BOOL)booleanForKey:(NSString *)key;

/**
 *  Returns the value associated with a given key as a date.
 *
 *  Supported values must use the following format: `yyyy-MM-ddTHH:mm:ss.SSSZ`.
 *
 *  @param key The key for which to return the corresponding value.
 *
 *  @return The value associated with *key*, or `nil` if no value is associated with *key* or an error happened.
 */
- (NSDate *)dateForKey:(NSString *)key;

@end
