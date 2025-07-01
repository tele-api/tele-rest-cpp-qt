/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIChatAdministratorRights.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatAdministratorRights::OAIChatAdministratorRights(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatAdministratorRights::OAIChatAdministratorRights() {
    this->initializeModel();
}

OAIChatAdministratorRights::~OAIChatAdministratorRights() {}

void OAIChatAdministratorRights::initializeModel() {

    m_is_anonymous_isSet = false;
    m_is_anonymous_isValid = false;

    m_can_manage_chat_isSet = false;
    m_can_manage_chat_isValid = false;

    m_can_delete_messages_isSet = false;
    m_can_delete_messages_isValid = false;

    m_can_manage_video_chats_isSet = false;
    m_can_manage_video_chats_isValid = false;

    m_can_restrict_members_isSet = false;
    m_can_restrict_members_isValid = false;

    m_can_promote_members_isSet = false;
    m_can_promote_members_isValid = false;

    m_can_change_info_isSet = false;
    m_can_change_info_isValid = false;

    m_can_invite_users_isSet = false;
    m_can_invite_users_isValid = false;

    m_can_post_stories_isSet = false;
    m_can_post_stories_isValid = false;

    m_can_edit_stories_isSet = false;
    m_can_edit_stories_isValid = false;

    m_can_delete_stories_isSet = false;
    m_can_delete_stories_isValid = false;

    m_can_post_messages_isSet = false;
    m_can_post_messages_isValid = false;

    m_can_edit_messages_isSet = false;
    m_can_edit_messages_isValid = false;

    m_can_pin_messages_isSet = false;
    m_can_pin_messages_isValid = false;

    m_can_manage_topics_isSet = false;
    m_can_manage_topics_isValid = false;
}

void OAIChatAdministratorRights::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatAdministratorRights::fromJsonObject(QJsonObject json) {

    m_is_anonymous_isValid = ::tele_rest::fromJsonValue(m_is_anonymous, json[QString("is_anonymous")]);
    m_is_anonymous_isSet = !json[QString("is_anonymous")].isNull() && m_is_anonymous_isValid;

    m_can_manage_chat_isValid = ::tele_rest::fromJsonValue(m_can_manage_chat, json[QString("can_manage_chat")]);
    m_can_manage_chat_isSet = !json[QString("can_manage_chat")].isNull() && m_can_manage_chat_isValid;

    m_can_delete_messages_isValid = ::tele_rest::fromJsonValue(m_can_delete_messages, json[QString("can_delete_messages")]);
    m_can_delete_messages_isSet = !json[QString("can_delete_messages")].isNull() && m_can_delete_messages_isValid;

    m_can_manage_video_chats_isValid = ::tele_rest::fromJsonValue(m_can_manage_video_chats, json[QString("can_manage_video_chats")]);
    m_can_manage_video_chats_isSet = !json[QString("can_manage_video_chats")].isNull() && m_can_manage_video_chats_isValid;

    m_can_restrict_members_isValid = ::tele_rest::fromJsonValue(m_can_restrict_members, json[QString("can_restrict_members")]);
    m_can_restrict_members_isSet = !json[QString("can_restrict_members")].isNull() && m_can_restrict_members_isValid;

    m_can_promote_members_isValid = ::tele_rest::fromJsonValue(m_can_promote_members, json[QString("can_promote_members")]);
    m_can_promote_members_isSet = !json[QString("can_promote_members")].isNull() && m_can_promote_members_isValid;

    m_can_change_info_isValid = ::tele_rest::fromJsonValue(m_can_change_info, json[QString("can_change_info")]);
    m_can_change_info_isSet = !json[QString("can_change_info")].isNull() && m_can_change_info_isValid;

    m_can_invite_users_isValid = ::tele_rest::fromJsonValue(m_can_invite_users, json[QString("can_invite_users")]);
    m_can_invite_users_isSet = !json[QString("can_invite_users")].isNull() && m_can_invite_users_isValid;

    m_can_post_stories_isValid = ::tele_rest::fromJsonValue(m_can_post_stories, json[QString("can_post_stories")]);
    m_can_post_stories_isSet = !json[QString("can_post_stories")].isNull() && m_can_post_stories_isValid;

    m_can_edit_stories_isValid = ::tele_rest::fromJsonValue(m_can_edit_stories, json[QString("can_edit_stories")]);
    m_can_edit_stories_isSet = !json[QString("can_edit_stories")].isNull() && m_can_edit_stories_isValid;

    m_can_delete_stories_isValid = ::tele_rest::fromJsonValue(m_can_delete_stories, json[QString("can_delete_stories")]);
    m_can_delete_stories_isSet = !json[QString("can_delete_stories")].isNull() && m_can_delete_stories_isValid;

    m_can_post_messages_isValid = ::tele_rest::fromJsonValue(m_can_post_messages, json[QString("can_post_messages")]);
    m_can_post_messages_isSet = !json[QString("can_post_messages")].isNull() && m_can_post_messages_isValid;

    m_can_edit_messages_isValid = ::tele_rest::fromJsonValue(m_can_edit_messages, json[QString("can_edit_messages")]);
    m_can_edit_messages_isSet = !json[QString("can_edit_messages")].isNull() && m_can_edit_messages_isValid;

    m_can_pin_messages_isValid = ::tele_rest::fromJsonValue(m_can_pin_messages, json[QString("can_pin_messages")]);
    m_can_pin_messages_isSet = !json[QString("can_pin_messages")].isNull() && m_can_pin_messages_isValid;

    m_can_manage_topics_isValid = ::tele_rest::fromJsonValue(m_can_manage_topics, json[QString("can_manage_topics")]);
    m_can_manage_topics_isSet = !json[QString("can_manage_topics")].isNull() && m_can_manage_topics_isValid;
}

QString OAIChatAdministratorRights::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatAdministratorRights::asJsonObject() const {
    QJsonObject obj;
    if (m_is_anonymous_isSet) {
        obj.insert(QString("is_anonymous"), ::tele_rest::toJsonValue(m_is_anonymous));
    }
    if (m_can_manage_chat_isSet) {
        obj.insert(QString("can_manage_chat"), ::tele_rest::toJsonValue(m_can_manage_chat));
    }
    if (m_can_delete_messages_isSet) {
        obj.insert(QString("can_delete_messages"), ::tele_rest::toJsonValue(m_can_delete_messages));
    }
    if (m_can_manage_video_chats_isSet) {
        obj.insert(QString("can_manage_video_chats"), ::tele_rest::toJsonValue(m_can_manage_video_chats));
    }
    if (m_can_restrict_members_isSet) {
        obj.insert(QString("can_restrict_members"), ::tele_rest::toJsonValue(m_can_restrict_members));
    }
    if (m_can_promote_members_isSet) {
        obj.insert(QString("can_promote_members"), ::tele_rest::toJsonValue(m_can_promote_members));
    }
    if (m_can_change_info_isSet) {
        obj.insert(QString("can_change_info"), ::tele_rest::toJsonValue(m_can_change_info));
    }
    if (m_can_invite_users_isSet) {
        obj.insert(QString("can_invite_users"), ::tele_rest::toJsonValue(m_can_invite_users));
    }
    if (m_can_post_stories_isSet) {
        obj.insert(QString("can_post_stories"), ::tele_rest::toJsonValue(m_can_post_stories));
    }
    if (m_can_edit_stories_isSet) {
        obj.insert(QString("can_edit_stories"), ::tele_rest::toJsonValue(m_can_edit_stories));
    }
    if (m_can_delete_stories_isSet) {
        obj.insert(QString("can_delete_stories"), ::tele_rest::toJsonValue(m_can_delete_stories));
    }
    if (m_can_post_messages_isSet) {
        obj.insert(QString("can_post_messages"), ::tele_rest::toJsonValue(m_can_post_messages));
    }
    if (m_can_edit_messages_isSet) {
        obj.insert(QString("can_edit_messages"), ::tele_rest::toJsonValue(m_can_edit_messages));
    }
    if (m_can_pin_messages_isSet) {
        obj.insert(QString("can_pin_messages"), ::tele_rest::toJsonValue(m_can_pin_messages));
    }
    if (m_can_manage_topics_isSet) {
        obj.insert(QString("can_manage_topics"), ::tele_rest::toJsonValue(m_can_manage_topics));
    }
    return obj;
}

bool OAIChatAdministratorRights::isIsAnonymous() const {
    return m_is_anonymous;
}
void OAIChatAdministratorRights::setIsAnonymous(const bool &is_anonymous) {
    m_is_anonymous = is_anonymous;
    m_is_anonymous_isSet = true;
}

bool OAIChatAdministratorRights::is_is_anonymous_Set() const{
    return m_is_anonymous_isSet;
}

bool OAIChatAdministratorRights::is_is_anonymous_Valid() const{
    return m_is_anonymous_isValid;
}

bool OAIChatAdministratorRights::isCanManageChat() const {
    return m_can_manage_chat;
}
void OAIChatAdministratorRights::setCanManageChat(const bool &can_manage_chat) {
    m_can_manage_chat = can_manage_chat;
    m_can_manage_chat_isSet = true;
}

bool OAIChatAdministratorRights::is_can_manage_chat_Set() const{
    return m_can_manage_chat_isSet;
}

bool OAIChatAdministratorRights::is_can_manage_chat_Valid() const{
    return m_can_manage_chat_isValid;
}

bool OAIChatAdministratorRights::isCanDeleteMessages() const {
    return m_can_delete_messages;
}
void OAIChatAdministratorRights::setCanDeleteMessages(const bool &can_delete_messages) {
    m_can_delete_messages = can_delete_messages;
    m_can_delete_messages_isSet = true;
}

bool OAIChatAdministratorRights::is_can_delete_messages_Set() const{
    return m_can_delete_messages_isSet;
}

bool OAIChatAdministratorRights::is_can_delete_messages_Valid() const{
    return m_can_delete_messages_isValid;
}

bool OAIChatAdministratorRights::isCanManageVideoChats() const {
    return m_can_manage_video_chats;
}
void OAIChatAdministratorRights::setCanManageVideoChats(const bool &can_manage_video_chats) {
    m_can_manage_video_chats = can_manage_video_chats;
    m_can_manage_video_chats_isSet = true;
}

bool OAIChatAdministratorRights::is_can_manage_video_chats_Set() const{
    return m_can_manage_video_chats_isSet;
}

bool OAIChatAdministratorRights::is_can_manage_video_chats_Valid() const{
    return m_can_manage_video_chats_isValid;
}

bool OAIChatAdministratorRights::isCanRestrictMembers() const {
    return m_can_restrict_members;
}
void OAIChatAdministratorRights::setCanRestrictMembers(const bool &can_restrict_members) {
    m_can_restrict_members = can_restrict_members;
    m_can_restrict_members_isSet = true;
}

bool OAIChatAdministratorRights::is_can_restrict_members_Set() const{
    return m_can_restrict_members_isSet;
}

bool OAIChatAdministratorRights::is_can_restrict_members_Valid() const{
    return m_can_restrict_members_isValid;
}

bool OAIChatAdministratorRights::isCanPromoteMembers() const {
    return m_can_promote_members;
}
void OAIChatAdministratorRights::setCanPromoteMembers(const bool &can_promote_members) {
    m_can_promote_members = can_promote_members;
    m_can_promote_members_isSet = true;
}

bool OAIChatAdministratorRights::is_can_promote_members_Set() const{
    return m_can_promote_members_isSet;
}

bool OAIChatAdministratorRights::is_can_promote_members_Valid() const{
    return m_can_promote_members_isValid;
}

bool OAIChatAdministratorRights::isCanChangeInfo() const {
    return m_can_change_info;
}
void OAIChatAdministratorRights::setCanChangeInfo(const bool &can_change_info) {
    m_can_change_info = can_change_info;
    m_can_change_info_isSet = true;
}

bool OAIChatAdministratorRights::is_can_change_info_Set() const{
    return m_can_change_info_isSet;
}

bool OAIChatAdministratorRights::is_can_change_info_Valid() const{
    return m_can_change_info_isValid;
}

bool OAIChatAdministratorRights::isCanInviteUsers() const {
    return m_can_invite_users;
}
void OAIChatAdministratorRights::setCanInviteUsers(const bool &can_invite_users) {
    m_can_invite_users = can_invite_users;
    m_can_invite_users_isSet = true;
}

bool OAIChatAdministratorRights::is_can_invite_users_Set() const{
    return m_can_invite_users_isSet;
}

bool OAIChatAdministratorRights::is_can_invite_users_Valid() const{
    return m_can_invite_users_isValid;
}

bool OAIChatAdministratorRights::isCanPostStories() const {
    return m_can_post_stories;
}
void OAIChatAdministratorRights::setCanPostStories(const bool &can_post_stories) {
    m_can_post_stories = can_post_stories;
    m_can_post_stories_isSet = true;
}

bool OAIChatAdministratorRights::is_can_post_stories_Set() const{
    return m_can_post_stories_isSet;
}

bool OAIChatAdministratorRights::is_can_post_stories_Valid() const{
    return m_can_post_stories_isValid;
}

bool OAIChatAdministratorRights::isCanEditStories() const {
    return m_can_edit_stories;
}
void OAIChatAdministratorRights::setCanEditStories(const bool &can_edit_stories) {
    m_can_edit_stories = can_edit_stories;
    m_can_edit_stories_isSet = true;
}

bool OAIChatAdministratorRights::is_can_edit_stories_Set() const{
    return m_can_edit_stories_isSet;
}

bool OAIChatAdministratorRights::is_can_edit_stories_Valid() const{
    return m_can_edit_stories_isValid;
}

bool OAIChatAdministratorRights::isCanDeleteStories() const {
    return m_can_delete_stories;
}
void OAIChatAdministratorRights::setCanDeleteStories(const bool &can_delete_stories) {
    m_can_delete_stories = can_delete_stories;
    m_can_delete_stories_isSet = true;
}

bool OAIChatAdministratorRights::is_can_delete_stories_Set() const{
    return m_can_delete_stories_isSet;
}

bool OAIChatAdministratorRights::is_can_delete_stories_Valid() const{
    return m_can_delete_stories_isValid;
}

bool OAIChatAdministratorRights::isCanPostMessages() const {
    return m_can_post_messages;
}
void OAIChatAdministratorRights::setCanPostMessages(const bool &can_post_messages) {
    m_can_post_messages = can_post_messages;
    m_can_post_messages_isSet = true;
}

bool OAIChatAdministratorRights::is_can_post_messages_Set() const{
    return m_can_post_messages_isSet;
}

bool OAIChatAdministratorRights::is_can_post_messages_Valid() const{
    return m_can_post_messages_isValid;
}

bool OAIChatAdministratorRights::isCanEditMessages() const {
    return m_can_edit_messages;
}
void OAIChatAdministratorRights::setCanEditMessages(const bool &can_edit_messages) {
    m_can_edit_messages = can_edit_messages;
    m_can_edit_messages_isSet = true;
}

bool OAIChatAdministratorRights::is_can_edit_messages_Set() const{
    return m_can_edit_messages_isSet;
}

bool OAIChatAdministratorRights::is_can_edit_messages_Valid() const{
    return m_can_edit_messages_isValid;
}

bool OAIChatAdministratorRights::isCanPinMessages() const {
    return m_can_pin_messages;
}
void OAIChatAdministratorRights::setCanPinMessages(const bool &can_pin_messages) {
    m_can_pin_messages = can_pin_messages;
    m_can_pin_messages_isSet = true;
}

bool OAIChatAdministratorRights::is_can_pin_messages_Set() const{
    return m_can_pin_messages_isSet;
}

bool OAIChatAdministratorRights::is_can_pin_messages_Valid() const{
    return m_can_pin_messages_isValid;
}

bool OAIChatAdministratorRights::isCanManageTopics() const {
    return m_can_manage_topics;
}
void OAIChatAdministratorRights::setCanManageTopics(const bool &can_manage_topics) {
    m_can_manage_topics = can_manage_topics;
    m_can_manage_topics_isSet = true;
}

bool OAIChatAdministratorRights::is_can_manage_topics_Set() const{
    return m_can_manage_topics_isSet;
}

bool OAIChatAdministratorRights::is_can_manage_topics_Valid() const{
    return m_can_manage_topics_isValid;
}

bool OAIChatAdministratorRights::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_is_anonymous_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_manage_chat_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_delete_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_manage_video_chats_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_restrict_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_promote_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_change_info_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_invite_users_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_post_stories_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_stories_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_delete_stories_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_post_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_edit_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_pin_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_manage_topics_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatAdministratorRights::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_is_anonymous_isValid && m_can_manage_chat_isValid && m_can_delete_messages_isValid && m_can_manage_video_chats_isValid && m_can_restrict_members_isValid && m_can_promote_members_isValid && m_can_change_info_isValid && m_can_invite_users_isValid && m_can_post_stories_isValid && m_can_edit_stories_isValid && m_can_delete_stories_isValid && true;
}

} // namespace tele_rest
