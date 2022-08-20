#
# Be sure to run `pod lib lint QNLiveSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'QNLiveSDK'
  s.version          = '0.1.0'
  s.summary          = 'QNLiveSDK的简单集成封装'

 
  
# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/pen110/QNLiveSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xxx' => 'xxx4@qq.com' }
  s.source           = { :git => 'https://github.com/pen110/QNLiveSDK.git', :tag => s.version.to_s }
  

  s.ios.deployment_target = '10.0'

  s.ios.vendored_framework = 'QNLiveSDK.framework'

  spec.ios.resource_bundle = { 'QNLiveSDK.framework/QNImages.bundle' }

  s.dependency 'AFNetworking','~> 4.0.1'
  s.dependency 'Masonry','~> 1.1.0'
  s.dependency 'YYModel','~> 1.0.4'
  s.dependency 'PLPlayerKit','~> 3.4.9'
  s.dependency 'SocketRocket','~> 0.6.0'
  s.dependency 'LeanCloudObjc','~> 13.9.0'

end

