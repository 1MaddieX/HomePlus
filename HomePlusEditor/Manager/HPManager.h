#import <UIKit/UIKit.h>
@interface HPManager : NSObject

+ (instancetype)sharedManager;

@property (nonatomic, retain) NSString *currentLoadoutName;

@property (nonatomic, assign) BOOL useUserDefaults;

@property (nonatomic, assign) BOOL switcherDisables;
@property (nonatomic, assign) BOOL vRowUpdates;
@property (nonatomic, assign) BOOL resettingIconLayout;
@property (nonatomic, assign) BOOL pendingRespring;
@property (nonatomic, assign) BOOL dockConfigEnabled;

+ (instancetype)sharedManager;
- (instancetype)init;
- (void)recieveNotification:(NSNotification *)notification;
- (void)saveCurrentLoadoutName;
- (void)loadSavedCurrentLoadoutName;
- (void)saveCurrentLoadout;
- (void)loadCurrentLoadout;
- (id)loadConfigFromFilesystem:(NSString *)name;
- (id)loadConfigFromUserDefaultSystem:(NSString *)name;
- (void)saveLoadoutToUserDefaults:(NSString *)name;
- (NSMutableDictionary *)createDictionaryDefaultStructure;
- (void)resetCurrentLoadoutToDefaults;

@end