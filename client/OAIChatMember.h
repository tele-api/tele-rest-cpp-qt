/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIChatMember.h
 *
 * This object contains information about one member of a chat. Currently, the following 6 types of chat members are supported:  * [ChatMemberOwner](https://core.telegram.org/bots/api/#chatmemberowner) * [ChatMemberAdministrator](https://core.telegram.org/bots/api/#chatmemberadministrator) * [ChatMemberMember](https://core.telegram.org/bots/api/#chatmembermember) * [ChatMemberRestricted](https://core.telegram.org/bots/api/#chatmemberrestricted) * [ChatMemberLeft](https://core.telegram.org/bots/api/#chatmemberleft) * [ChatMemberBanned](https://core.telegram.org/bots/api/#chatmemberbanned)
 */

#ifndef OAIChatMember_H
#define OAIChatMember_H

#include <QJsonObject>

#include "OAIChatMemberAdministrator.h"
#include "OAIChatMemberBanned.h"
#include "OAIChatMemberLeft.h"
#include "OAIChatMemberMember.h"
#include "OAIChatMemberOwner.h"
#include "OAIChatMemberRestricted.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;

class OAIChatMember : public OAIObject {
public:
    OAIChatMember();
    OAIChatMember(QString json);
    ~OAIChatMember() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    OAIUser getUser() const;
    void setUser(const OAIUser &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    bool isIsAnonymous() const;
    void setIsAnonymous(const bool &is_anonymous);
    bool is_is_anonymous_Set() const;
    bool is_is_anonymous_Valid() const;

    bool isCanBeEdited() const;
    void setCanBeEdited(const bool &can_be_edited);
    bool is_can_be_edited_Set() const;
    bool is_can_be_edited_Valid() const;

    bool isCanManageChat() const;
    void setCanManageChat(const bool &can_manage_chat);
    bool is_can_manage_chat_Set() const;
    bool is_can_manage_chat_Valid() const;

    bool isCanDeleteMessages() const;
    void setCanDeleteMessages(const bool &can_delete_messages);
    bool is_can_delete_messages_Set() const;
    bool is_can_delete_messages_Valid() const;

    bool isCanManageVideoChats() const;
    void setCanManageVideoChats(const bool &can_manage_video_chats);
    bool is_can_manage_video_chats_Set() const;
    bool is_can_manage_video_chats_Valid() const;

    bool isCanRestrictMembers() const;
    void setCanRestrictMembers(const bool &can_restrict_members);
    bool is_can_restrict_members_Set() const;
    bool is_can_restrict_members_Valid() const;

    bool isCanPromoteMembers() const;
    void setCanPromoteMembers(const bool &can_promote_members);
    bool is_can_promote_members_Set() const;
    bool is_can_promote_members_Valid() const;

    bool isCanChangeInfo() const;
    void setCanChangeInfo(const bool &can_change_info);
    bool is_can_change_info_Set() const;
    bool is_can_change_info_Valid() const;

    bool isCanInviteUsers() const;
    void setCanInviteUsers(const bool &can_invite_users);
    bool is_can_invite_users_Set() const;
    bool is_can_invite_users_Valid() const;

    bool isCanPostStories() const;
    void setCanPostStories(const bool &can_post_stories);
    bool is_can_post_stories_Set() const;
    bool is_can_post_stories_Valid() const;

    bool isCanEditStories() const;
    void setCanEditStories(const bool &can_edit_stories);
    bool is_can_edit_stories_Set() const;
    bool is_can_edit_stories_Valid() const;

    bool isCanDeleteStories() const;
    void setCanDeleteStories(const bool &can_delete_stories);
    bool is_can_delete_stories_Set() const;
    bool is_can_delete_stories_Valid() const;

    bool isCanPinMessages() const;
    void setCanPinMessages(const bool &can_pin_messages);
    bool is_can_pin_messages_Set() const;
    bool is_can_pin_messages_Valid() const;

    bool isCanManageTopics() const;
    void setCanManageTopics(const bool &can_manage_topics);
    bool is_can_manage_topics_Set() const;
    bool is_can_manage_topics_Valid() const;

    qint32 getUntilDate() const;
    void setUntilDate(const qint32 &until_date);
    bool is_until_date_Set() const;
    bool is_until_date_Valid() const;

    bool isIsMember() const;
    void setIsMember(const bool &is_member);
    bool is_is_member_Set() const;
    bool is_is_member_Valid() const;

    bool isCanSendMessages() const;
    void setCanSendMessages(const bool &can_send_messages);
    bool is_can_send_messages_Set() const;
    bool is_can_send_messages_Valid() const;

    bool isCanSendAudios() const;
    void setCanSendAudios(const bool &can_send_audios);
    bool is_can_send_audios_Set() const;
    bool is_can_send_audios_Valid() const;

    bool isCanSendDocuments() const;
    void setCanSendDocuments(const bool &can_send_documents);
    bool is_can_send_documents_Set() const;
    bool is_can_send_documents_Valid() const;

    bool isCanSendPhotos() const;
    void setCanSendPhotos(const bool &can_send_photos);
    bool is_can_send_photos_Set() const;
    bool is_can_send_photos_Valid() const;

    bool isCanSendVideos() const;
    void setCanSendVideos(const bool &can_send_videos);
    bool is_can_send_videos_Set() const;
    bool is_can_send_videos_Valid() const;

    bool isCanSendVideoNotes() const;
    void setCanSendVideoNotes(const bool &can_send_video_notes);
    bool is_can_send_video_notes_Set() const;
    bool is_can_send_video_notes_Valid() const;

    bool isCanSendVoiceNotes() const;
    void setCanSendVoiceNotes(const bool &can_send_voice_notes);
    bool is_can_send_voice_notes_Set() const;
    bool is_can_send_voice_notes_Valid() const;

    bool isCanSendPolls() const;
    void setCanSendPolls(const bool &can_send_polls);
    bool is_can_send_polls_Set() const;
    bool is_can_send_polls_Valid() const;

    bool isCanSendOtherMessages() const;
    void setCanSendOtherMessages(const bool &can_send_other_messages);
    bool is_can_send_other_messages_Set() const;
    bool is_can_send_other_messages_Valid() const;

    bool isCanAddWebPagePreviews() const;
    void setCanAddWebPagePreviews(const bool &can_add_web_page_previews);
    bool is_can_add_web_page_previews_Set() const;
    bool is_can_add_web_page_previews_Valid() const;

    QString getCustomTitle() const;
    void setCustomTitle(const QString &custom_title);
    bool is_custom_title_Set() const;
    bool is_custom_title_Valid() const;

    bool isCanPostMessages() const;
    void setCanPostMessages(const bool &can_post_messages);
    bool is_can_post_messages_Set() const;
    bool is_can_post_messages_Valid() const;

    bool isCanEditMessages() const;
    void setCanEditMessages(const bool &can_edit_messages);
    bool is_can_edit_messages_Set() const;
    bool is_can_edit_messages_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAIUser m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    bool m_is_anonymous;
    bool m_is_anonymous_isSet;
    bool m_is_anonymous_isValid;

    bool m_can_be_edited;
    bool m_can_be_edited_isSet;
    bool m_can_be_edited_isValid;

    bool m_can_manage_chat;
    bool m_can_manage_chat_isSet;
    bool m_can_manage_chat_isValid;

    bool m_can_delete_messages;
    bool m_can_delete_messages_isSet;
    bool m_can_delete_messages_isValid;

    bool m_can_manage_video_chats;
    bool m_can_manage_video_chats_isSet;
    bool m_can_manage_video_chats_isValid;

    bool m_can_restrict_members;
    bool m_can_restrict_members_isSet;
    bool m_can_restrict_members_isValid;

    bool m_can_promote_members;
    bool m_can_promote_members_isSet;
    bool m_can_promote_members_isValid;

    bool m_can_change_info;
    bool m_can_change_info_isSet;
    bool m_can_change_info_isValid;

    bool m_can_invite_users;
    bool m_can_invite_users_isSet;
    bool m_can_invite_users_isValid;

    bool m_can_post_stories;
    bool m_can_post_stories_isSet;
    bool m_can_post_stories_isValid;

    bool m_can_edit_stories;
    bool m_can_edit_stories_isSet;
    bool m_can_edit_stories_isValid;

    bool m_can_delete_stories;
    bool m_can_delete_stories_isSet;
    bool m_can_delete_stories_isValid;

    bool m_can_pin_messages;
    bool m_can_pin_messages_isSet;
    bool m_can_pin_messages_isValid;

    bool m_can_manage_topics;
    bool m_can_manage_topics_isSet;
    bool m_can_manage_topics_isValid;

    qint32 m_until_date;
    bool m_until_date_isSet;
    bool m_until_date_isValid;

    bool m_is_member;
    bool m_is_member_isSet;
    bool m_is_member_isValid;

    bool m_can_send_messages;
    bool m_can_send_messages_isSet;
    bool m_can_send_messages_isValid;

    bool m_can_send_audios;
    bool m_can_send_audios_isSet;
    bool m_can_send_audios_isValid;

    bool m_can_send_documents;
    bool m_can_send_documents_isSet;
    bool m_can_send_documents_isValid;

    bool m_can_send_photos;
    bool m_can_send_photos_isSet;
    bool m_can_send_photos_isValid;

    bool m_can_send_videos;
    bool m_can_send_videos_isSet;
    bool m_can_send_videos_isValid;

    bool m_can_send_video_notes;
    bool m_can_send_video_notes_isSet;
    bool m_can_send_video_notes_isValid;

    bool m_can_send_voice_notes;
    bool m_can_send_voice_notes_isSet;
    bool m_can_send_voice_notes_isValid;

    bool m_can_send_polls;
    bool m_can_send_polls_isSet;
    bool m_can_send_polls_isValid;

    bool m_can_send_other_messages;
    bool m_can_send_other_messages_isSet;
    bool m_can_send_other_messages_isValid;

    bool m_can_add_web_page_previews;
    bool m_can_add_web_page_previews_isSet;
    bool m_can_add_web_page_previews_isValid;

    QString m_custom_title;
    bool m_custom_title_isSet;
    bool m_custom_title_isValid;

    bool m_can_post_messages;
    bool m_can_post_messages_isSet;
    bool m_can_post_messages_isValid;

    bool m_can_edit_messages;
    bool m_can_edit_messages_isSet;
    bool m_can_edit_messages_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIChatMember)

#endif // OAIChatMember_H
