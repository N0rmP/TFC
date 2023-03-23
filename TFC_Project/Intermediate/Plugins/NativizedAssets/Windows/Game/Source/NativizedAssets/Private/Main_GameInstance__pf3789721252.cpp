#include "NativizedAssets.h"
#include "Main_GameInstance__pf3789721252.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "temp_clear__pf3789721252.h"
#include "temp_over__pf3789721252.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "SaveLoadManager__pf3789721252.h"
#include "line_manager__pf3789721252.h"
#include "tower_manager__pf3789721252.h"
#include "enemy_manager__pf3789721252.h"
#include "electricity_manager__pf3789721252.h"
#include "player_character__pf2509438801.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "rifle__pf3559600238.h"
#include "wdg_Hud__pf3053510930.h"
#include "Upgrade__pf77128533.h"
#include "Suit_Upgrade__pf77128533.h"
#include "Rifle_Upgrade__pf77128533.h"
#include "upgrade_Manager__pf3789721252.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMain_GameInstance_C__pf3789721252::UMain_GameInstance_C__pf3789721252(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__elecricity_manager__pf = nullptr;
	bpv__enemy_manager__pf = nullptr;
	bpv__tower_manager__pf = nullptr;
	bpv__widget_manager__pf = nullptr;
	bpv__line_manager__pf = nullptr;
	bpv__upgrade_manager__pf = nullptr;
	bpv__cur_plr__pf = nullptr;
	bpv__saveload_manager__pf = nullptr;
	bpv__EST_arr__pf = TArray<UDataTable*> ();
	bpv__EST_arr__pf.Reserve(1);
	bpv__EST_arr__pf.Add(CastChecked<UDataTable>(CastChecked<UDynamicClass>(UMain_GameInstance_C__pf3789721252::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	bpv__cell__pf = 6;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMain_GameInstance_C__pf3789721252::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMain_GameInstance_C__pf3789721252::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(Utemp_clear_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Utemp_over_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USaveLoadManager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aline_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Atower_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aenemy_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aelectricity_manager_C__pf3789721252::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aplayer_character_C__pf2509438801::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Arifle_C__pf3559600238::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Uwdg_Hud_C__pf3053510930::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UUpgrade_C__pf77128533::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USuit_Upgrade_C__pf77128533::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(URifle_Upgrade_C__pf77128533::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(Aupgrade_Manager_C__pf3789721252::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UMain_GameInstance_C__pf3789721252::bpf__ExecuteUbergraph_Main_GameInstance__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	Utemp_clear_C__pf3789721252* bpfv__CallFunc_Create_ReturnValue__pf{};
	Utemp_over_C__pf3789721252* bpfv__CallFunc_Create_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if (!b0l__K2Node_CustomEvent_is_clear__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<Utemp_clear_C__pf3789721252>(UWidgetBlueprintLibrary::Create(this, Utemp_clear_C__pf3789721252::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 5:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(8, 1632357018, TEXT("ExecuteUbergraph_Main_GameInstance_0"), this));
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue_1__pf = CastChecked<Utemp_over_C__pf3789721252>(UWidgetBlueprintLibrary::Create(this, Utemp_over_C__pf3789721252::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue_1__pf))
				{
					bpfv__CallFunc_Create_ReturnValue_1__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = 5;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("mainmenu_Map")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_GameInstance_C__pf3789721252::bpf__level_end__pf(bool bpp__is_clear__pf)
{
	b0l__K2Node_CustomEvent_is_clear__pf = bpp__is_clear__pf;
	bpf__ExecuteUbergraph_Main_GameInstance__pf_0(1);
}
void UMain_GameInstance_C__pf3789721252::bpf__level_initiate__pf(Aplayer_character_C__pf2509438801* bpp__plr_of_this_lvl__pf, int32 bpp__cur_stage_num__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv_____int_Array_Index_Variable__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	Aplayer_character_C__pf2509438801* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	UDataTable* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv_____int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	Arifle_C__pf3559600238* bpfv__K2Node_DynamicCast_AsRifle__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	Uwdg_Hud_C__pf3053510930* bpfv__CallFunc_Create_ReturnValue__pf{};
	TArray<UClass*> bpfv__CallFunc_get_Upgraded_upgraded__pf{};
	UClass* bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UUpgrade_C__pf77128533* bpfv__CallFunc_AddComponentByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	USuit_Upgrade_C__pf77128533* bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	UUpgrade_C__pf77128533* bpfv__CallFunc_AddComponentByClass_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf{};
	URifle_Upgrade_C__pf77128533* bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_2__pf{};
	Aupgrade_Manager_C__pf3789721252* bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf{};
	Aline_manager_C__pf3789721252* bpfv__CallFunc_GetActorOfClass_ReturnValue_2__pf{};
	Aelectricity_manager_C__pf3789721252* bpfv__CallFunc_GetActorOfClass_ReturnValue_3__pf{};
	Aenemy_manager_C__pf3789721252* bpfv__CallFunc_GetActorOfClass_ReturnValue_4__pf{};
	Atower_manager_C__pf3789721252* bpfv__CallFunc_GetActorOfClass_ReturnValue_5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<Aplayer_character_C__pf2509438801>(UGameplayStatics::GetActorOfClass(this, Aplayer_character_C__pf2509438801::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				bpv__cur_plr__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue__pf;
			}
		case 3:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_5__pf = CastChecked<Atower_manager_C__pf3789721252>(UGameplayStatics::GetActorOfClass(this, Atower_manager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				bpv__tower_manager__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_5__pf;
			}
		case 5:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_4__pf = CastChecked<Aenemy_manager_C__pf3789721252>(UGameplayStatics::GetActorOfClass(this, Aenemy_manager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpv__enemy_manager__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_4__pf;
			}
		case 7:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_3__pf = CastChecked<Aelectricity_manager_C__pf3789721252>(UGameplayStatics::GetActorOfClass(this, Aelectricity_manager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 8:
			{
				bpv__elecricity_manager__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_3__pf;
			}
		case 9:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_2__pf = CastChecked<Aline_manager_C__pf3789721252>(UGameplayStatics::GetActorOfClass(this, Aline_manager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				bpv__line_manager__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_2__pf;
			}
		case 11:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf = CastChecked<Aupgrade_Manager_C__pf3789721252>(UGameplayStatics::GetActorOfClass(this, Aupgrade_Manager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 12:
			{
				bpv__upgrade_manager__pf = bpfv__CallFunc_GetActorOfClass_ReturnValue_1__pf;
			}
		case 13:
			{
				if(::IsValid(bpv__upgrade_manager__pf))
				{
					bpv__upgrade_manager__pf->bpf__get_Upgraded__pf(/*out*/ bpfv__CallFunc_get_Upgraded_upgraded__pf);
				}
			}
		case 14:
			{
				bpfv_____int_Loop_Counter_Variable__pf = 0;
			}
		case 15:
			{
				bpfv_____int_Array_Index_Variable__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_get_Upgraded_upgraded__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv_____int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 17:
			{
				bpfv_____int_Array_Index_Variable__pf = bpfv_____int_Loop_Counter_Variable__pf;
			}
		case 18:
			{
				__StateStack.Push(33);
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_get_Upgraded_upgraded__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ClassClass(bpfv__CallFunc_Array_Get_Item_1__pf, URifle_Upgrade_C__pf77128533::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 20:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_get_Upgraded_upgraded__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__cur_plr__pf))
				{
					bpfv__CallFunc_AddComponentByClass_ReturnValue_1__pf = CastChecked<UUpgrade_C__pf77128533>(bpv__cur_plr__pf->AActor::AddComponentByClass(bpfv__CallFunc_Array_Get_Item_1__pf, false, FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) ), false), ECastCheckedType::NullAllowed);
				}
			}
		case 21:
			{
				bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf = Cast<URifle_Upgrade_C__pf77128533>(bpfv__CallFunc_AddComponentByClass_ReturnValue_1__pf);
				bpfv__K2Node_DynamicCast_bSuccess_2__pf = (bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				AActor*  __Local__1 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsRifle__pf = Cast<Arifle_C__pf3559600238>(((::IsValid(bpv__cur_plr__pf) && ::IsValid(bpv__cur_plr__pf->bpv__rifle__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__cur_plr__pf->bpv__rifle__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__1)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsRifle__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf))
				{
					bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf->bpf__Set_Owner__pf(bpfv__K2Node_DynamicCast_AsRifle__pf);
				}
			}
		case 24:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf))
				{
					bpfv__K2Node_DynamicCast_AsRifle_Upgrade__pf->bpf__On_Added__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				FCustomThunkTemplates::Array_Get(bpv__EST_arr__pf, bpp__cur_stage_num__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__enemy_manager__pf))
				{
					bpv__enemy_manager__pf->bpf__initiate_enemy_manager__pf(bpfv__CallFunc_Array_Get_Item__pf);
				}
			}
		case 26:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__cur_stage_num__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
			}
		case 28:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
			}
		case 29:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<Uwdg_Hud_C__pf3053510930>(UWidgetBlueprintLibrary::Create(this, Uwdg_Hud_C__pf3053510930::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 30:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 31:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->bpf__SetxHud__pfT(bpv__elecricity_manager__pf, bpv__cur_plr__pf, bpv__enemy_manager__pf);
				}
			}
		case 32:
			{
				if(::IsValid(bpv__elecricity_manager__pf))
				{
					bpv__elecricity_manager__pf->bpf__set_electricity__pf(1000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv_____int_Loop_Counter_Variable__pf, 1);
				bpfv_____int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 16;
				break;
			}
		case 34:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_get_Upgraded_upgraded__pf, bpfv_____int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__cur_plr__pf))
				{
					bpfv__CallFunc_AddComponentByClass_ReturnValue__pf = CastChecked<UUpgrade_C__pf77128533>(bpv__cur_plr__pf->AActor::AddComponentByClass(bpfv__CallFunc_Array_Get_Item_1__pf, false, FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) ), false), ECastCheckedType::NullAllowed);
				}
			}
		case 35:
			{
				bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf = Cast<USuit_Upgrade_C__pf77128533>(bpfv__CallFunc_AddComponentByClass_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf))
				{
					bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf->bpf__Set_Owner__pf(bpv__cur_plr__pf);
				}
			}
		case 37:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf))
				{
					bpfv__K2Node_DynamicCast_AsSuit_Upgrade__pf->bpf__On_Added__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_GameInstance_C__pf3789721252::bpf__get_electricity_manager__pf(/*out*/ Aelectricity_manager_C__pf3789721252*& bpp__electricity_manager_return__pf)
{
	bpp__electricity_manager_return__pf = bpv__elecricity_manager__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__get_enemy_manager__pf(/*out*/ Aenemy_manager_C__pf3789721252*& bpp__enemy_manager_return__pf)
{
	bpp__enemy_manager_return__pf = bpv__enemy_manager__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__get_tower_manager__pf(/*out*/ Atower_manager_C__pf3789721252*& bpp__tower_manager_return__pf)
{
	bpp__tower_manager_return__pf = bpv__tower_manager__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__get_widget_manager__pf(/*out*/ AActor*& bpp__widget_manager_return__pf)
{
	bpp__widget_manager_return__pf = bpv__widget_manager__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__get_line_manager__pf(/*out*/ Aline_manager_C__pf3789721252*& bpp__line_manager_return__pf)
{
	bpp__line_manager_return__pf = bpv__line_manager__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__game_Initiate__pf()
{
	USaveLoadManager_C__pf3789721252* bpfv__CallFunc_load_Game_NewParam__pf{};
	bpf__load_Game__pf(/*out*/ bpfv__CallFunc_load_Game_NewParam__pf);
	bpv__saveload_manager__pf = bpfv__CallFunc_load_Game_NewParam__pf;
}
void UMain_GameInstance_C__pf3789721252::bpf__load_Game__pf(/*out*/ USaveLoadManager_C__pf3789721252*& bpp__NewParam__pf)
{
	USaveLoadManager_C__pf3789721252* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	USaveLoadManager_C__pf3789721252* bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	USaveLoadManager_C__pf3789721252* bpfv__K2Node_DynamicCast_AsSave_Load_Manager_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<USaveLoadManager_C__pf3789721252>(UGameplayStatics::CreateSaveGameObject(USaveLoadManager_C__pf3789721252::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf = Cast<USaveLoadManager_C__pf3789721252>(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				FString  __Local__2 = FString(TEXT(""));
				int32  __Local__3 = 0;
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf->bpv__Slot_Name__pf) : (__Local__2)), ((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf->bpv__user_ID__pf) : (__Local__3)));
			}
		case 4:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				FString  __Local__4 = FString(TEXT(""));
				int32  __Local__5 = 0;
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf->bpv__Slot_Name__pf) : (__Local__4)), ((::IsValid(bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf)) ? (bpfv__K2Node_DynamicCast_AsSave_Load_Manager__pf->bpv__user_ID__pf) : (__Local__5)));
			}
		case 6:
			{
				bpfv__K2Node_DynamicCast_AsSave_Load_Manager_1__pf = Cast<USaveLoadManager_C__pf3789721252>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsSave_Load_Manager_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				bpp__NewParam__pf = bpfv__K2Node_DynamicCast_AsSave_Load_Manager_1__pf;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpp__NewParam__pf = ((USaveLoadManager_C__pf3789721252*)nullptr);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_GameInstance_C__pf3789721252::bpf__save_Game__pf(/*out*/ bool& bpp__succeed__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__saveload_manager__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__saveload_manager__pf))
				{
					bpv__saveload_manager__pf->bpf__Save_Game__pf();
				}
			}
		case 3:
			{
				bpp__succeed__pf = true;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__succeed__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UMain_GameInstance_C__pf3789721252::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DataTable /Game/resouerce/excel/EST_stage_1.EST_stage_1 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMain_GameInstance_C__pf3789721252::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/widget_manager.widget_manager_C 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  widget_manager_C /Game/blueprints/others/Observer/widget_manager.Default__widget_manager_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EditorLandscapeResources/AlphaBrushMaterial.AlphaBrushMaterial 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/resouerce/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpotLightComponent 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/blueprints/Tower/AoEParticle.AoEParticle 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/LowEntryExtendedStandardLibrary.DelegateULowEntryExtendedStandardLibraryCompareObjects__DelegateSignature 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test.test 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/resouerce/temp/StarterContent/Shapes/Shape_Cube.Shape_Cube 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/bullet_mark.bullet_mark 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/resouerce/temp/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/temp/FirstPerson/FPWeapon/Materials/M_FPGun.M_FPGun 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/resouerce/image/FirstPersonCrosshair.FirstPersonCrosshair 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/resouerce/material/test2.test2 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.MultiLineEditableTextBox 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/resouerce/temp/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/resouerce/temp/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton1.SK_Mannequin_Arms_Skeleton1 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/blueprints/others/Observer/temp_clear.temp_clear_C 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/blueprints/others/Observer/temp_over.temp_over_C 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/SaveLoadManager.SaveLoadManager_C 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/line_manager.line_manager_C 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/tower_manager.tower_manager_C 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/enemy_manager.enemy_manager_C 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/electricity_manager.electricity_manager_C 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/player_character.player_character_C 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/player/tool/rifle.rifle_C 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/blueprints/UI/wdg_Hud.wdg_Hud_C 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Upgrade.Upgrade_C 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Suit_Upgrade.Suit_Upgrade_C 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade.Rifle_Upgrade_C 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/blueprints/others/Observer/upgrade_Manager.upgrade_Manager_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMain_GameInstance_C__pf3789721252
{
	FRegisterHelper__UMain_GameInstance_C__pf3789721252()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/others/Observer/Main_GameInstance"), &UMain_GameInstance_C__pf3789721252::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMain_GameInstance_C__pf3789721252 Instance;
};
FRegisterHelper__UMain_GameInstance_C__pf3789721252 FRegisterHelper__UMain_GameInstance_C__pf3789721252::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
