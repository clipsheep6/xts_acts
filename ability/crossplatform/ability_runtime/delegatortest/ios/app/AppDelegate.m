/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "AppDelegate.h"
#import "EntryMain2ViewController.h"
#import "EntryMain3ViewController.h"
#import "EntryMain4ViewController.h"
#import "FeatureassistMainViewController.h"
#import "FeatureassistaMainViewController.h"
#import "Feature_assistbMainViewController.h"
#import "Feature_assistcMainViewController.h"
#import "Feature_assistdMainViewController.h"
#import "EntryMainViewController.h"
#import <libarkui_ios/StageApplication.h>

#define BUNDLE_DIRECTORY @"arkui-x"
#define BUNDLE_NAME @"com.example.delegatortest"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [StageApplication configModuleWithBundleDirectory:BUNDLE_DIRECTORY];
    [StageApplication launchApplication];
    
    NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",BUNDLE_NAME, @"entry", @"MainAbility"];
    EntryMainViewController *mainView = [[EntryMainViewController alloc] initWithInstanceName:instanceName];
    [self setNavRootVC:mainView];
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString *,id> *)options {
    NSLog(@"appdelegate openUrl callback, url : %@", url.absoluteString); // eg: (com.entry.arkui://entry?OtherAbility)
    
    NSString *bundleName = url.scheme;
    NSString *moduleName = url.host;
    NSString *abilityName, *params;

    NSURLComponents * urlComponents = [NSURLComponents componentsWithString:url.absoluteString];
    NSArray <NSURLQueryItem *> *array = urlComponents.queryItems;
    for (NSURLQueryItem * item in array) {
        if ([item.name isEqualToString:@"abilityName"]) {
            abilityName = item.value;
        } else if ([item.name isEqualToString:@"params"]) {
            params = item.value;
        }
    }

    [self handleOpenUrlWithBundleName:bundleName
                           moduleName:moduleName
                          abilityName:abilityName
                               params:params, nil];
    
    return YES;
}

- (BOOL)handleOpenUrlWithBundleName:(NSString *)bundleName
                         moduleName:(NSString *)moduleName
                        abilityName:(NSString *)abilityName
                             params:(NSString *)params, ...NS_REQUIRES_NIL_TERMINATION {
    
    id rootVC = [[UIApplication sharedApplication].delegate window].rootViewController;
    BOOL hasRoot = NO;
    if ([rootVC isKindOfClass:[UINavigationController class]]) {
        hasRoot = YES;
    }
    
    id subStageVC = nil;
    NSLog(@"test appdelegate openUrl entry callback, abilityName : %@", abilityName);
    if ([moduleName isEqualToString:@"entry"] && [abilityName isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        EntryMainViewController *entryOtherVC = [[EntryMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (EntryMainViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"entry"] && [abilityName isEqualToString:@"Main2Ability"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        EntryMain2ViewController *entryOtherVC = [[EntryMain2ViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (EntryMain2ViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"entry"] && [abilityName isEqualToString:@"Main3Ability"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        EntryMain3ViewController *entryOtherVC = [[EntryMain3ViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (EntryMain3ViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"entry"] && [abilityName isEqualToString:@"Main4Ability"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        EntryMain4ViewController *entryOtherVC = [[EntryMain4ViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (EntryMain4ViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"featureassist"] && [abilityName   isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        FeatureassistMainViewController *entryOtherVC = [[FeatureassistMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (FeatureassistMainViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"featureassista"] && [abilityName   isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        FeatureassistaMainViewController *entryOtherVC = [[FeatureassistaMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (FeatureassistaMainViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"feature_assistb"] && [abilityName   isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        Feature_assistbMainViewController *entryOtherVC = [[Feature_assistbMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (Feature_assistbMainViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"feature_assistc"] && [abilityName   isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        Feature_assistcMainViewController *entryOtherVC = [[Feature_assistcMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (Feature_assistcMainViewController *)entryOtherVC;
    } else if ([moduleName isEqualToString:@"feature_assistd"] && [abilityName   isEqualToString:@"MainAbility"]) {
        NSString *instanceName = [NSString stringWithFormat:@"%@:%@:%@",bundleName, moduleName, abilityName];
        Feature_assistdMainViewController *entryOtherVC = [[Feature_assistdMainViewController alloc] initWithInstanceName:instanceName];
        entryOtherVC.params = params;
        subStageVC = (Feature_assistdMainViewController *)entryOtherVC;
    } // other ViewController
    
    if (!subStageVC) {
        return NO;
    }
    
    if (!hasRoot) {
        [self setNavRootVC:subStageVC];
    } else {
        UINavigationController *rootNav = (UINavigationController *)self.window.rootViewController;
        [rootNav pushViewController:subStageVC animated:YES];
    }
    return YES;
}

- (void)setNavRootVC:(id)viewController {
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    UINavigationController *navi = [[UINavigationController alloc]initWithRootViewController:viewController];
    [self setNaviAppearance:navi];
    self.window.rootViewController = navi;
}

- (void)setNaviAppearance:(UINavigationController *)navi {
    UINavigationBarAppearance *appearance = [UINavigationBarAppearance new];
    [appearance configureWithOpaqueBackground];
    appearance.backgroundColor = UIColor.whiteColor;
    navi.navigationBar.standardAppearance = appearance;
    navi.navigationBar.scrollEdgeAppearance = navi.navigationBar.standardAppearance;
}

@end
