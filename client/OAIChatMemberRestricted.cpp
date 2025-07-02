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

#include "OAIChatMemberRestricted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatMemberRestricted::OAIChatMemberRestricted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatMemberRestricted::OAIChatMemberRestricted() {
    this->initializeModel();
}

OAIChatMemberRestricted::~OAIChatMemberRestricted() {}

void OAIChatMemberRestricted::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_is_member_isSet = false;
    m_is_member_isValid = false;

    m_can_send_messages_isSet = false;
    m_can_send_messages_isValid = false;

    m_can_send_audios_isSet = false;
    m_can_send_audios_isValid = false;

    m_can_send_documents_isSet = false;
    m_can_send_documents_isValid = false;

    m_can_send_photos_isSet = false;
    m_can_send_photos_isValid = false;

    m_can_send_videos_isSet = false;
    m_can_send_videos_isValid = false;

    m_can_send_video_notes_isSet = false;
    m_can_send_video_notes_isValid = false;

    m_can_send_voice_notes_isSet = false;
    m_can_send_voice_notes_isValid = false;

    m_can_send_polls_isSet = false;
    m_can_send_polls_isValid = false;

    m_can_send_other_messages_isSet = false;
    m_can_send_other_messages_isValid = false;

    m_can_add_web_page_previews_isSet = false;
    m_can_add_web_page_previews_isValid = false;

    m_can_change_info_isSet = false;
    m_can_change_info_isValid = false;

    m_can_invite_users_isSet = false;
    m_can_invite_users_isValid = false;

    m_can_pin_messages_isSet = false;
    m_can_pin_messages_isValid = false;

    m_can_manage_topics_isSet = false;
    m_can_manage_topics_isValid = false;

    m_until_date_isSet = false;
    m_until_date_isValid = false;
}

void OAIChatMemberRestricted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatMemberRestricted::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::tele_rest::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_is_member_isValid = ::tele_rest::fromJsonValue(m_is_member, json[QString("is_member")]);
    m_is_member_isSet = !json[QString("is_member")].isNull() && m_is_member_isValid;

    m_can_send_messages_isValid = ::tele_rest::fromJsonValue(m_can_send_messages, json[QString("can_send_messages")]);
    m_can_send_messages_isSet = !json[QString("can_send_messages")].isNull() && m_can_send_messages_isValid;

    m_can_send_audios_isValid = ::tele_rest::fromJsonValue(m_can_send_audios, json[QString("can_send_audios")]);
    m_can_send_audios_isSet = !json[QString("can_send_audios")].isNull() && m_can_send_audios_isValid;

    m_can_send_documents_isValid = ::tele_rest::fromJsonValue(m_can_send_documents, json[QString("can_send_documents")]);
    m_can_send_documents_isSet = !json[QString("can_send_documents")].isNull() && m_can_send_documents_isValid;

    m_can_send_photos_isValid = ::tele_rest::fromJsonValue(m_can_send_photos, json[QString("can_send_photos")]);
    m_can_send_photos_isSet = !json[QString("can_send_photos")].isNull() && m_can_send_photos_isValid;

    m_can_send_videos_isValid = ::tele_rest::fromJsonValue(m_can_send_videos, json[QString("can_send_videos")]);
    m_can_send_videos_isSet = !json[QString("can_send_videos")].isNull() && m_can_send_videos_isValid;

    m_can_send_video_notes_isValid = ::tele_rest::fromJsonValue(m_can_send_video_notes, json[QString("can_send_video_notes")]);
    m_can_send_video_notes_isSet = !json[QString("can_send_video_notes")].isNull() && m_can_send_video_notes_isValid;

    m_can_send_voice_notes_isValid = ::tele_rest::fromJsonValue(m_can_send_voice_notes, json[QString("can_send_voice_notes")]);
    m_can_send_voice_notes_isSet = !json[QString("can_send_voice_notes")].isNull() && m_can_send_voice_notes_isValid;

    m_can_send_polls_isValid = ::tele_rest::fromJsonValue(m_can_send_polls, json[QString("can_send_polls")]);
    m_can_send_polls_isSet = !json[QString("can_send_polls")].isNull() && m_can_send_polls_isValid;

    m_can_send_other_messages_isValid = ::tele_rest::fromJsonValue(m_can_send_other_messages, json[QString("can_send_other_messages")]);
    m_can_send_other_messages_isSet = !json[QString("can_send_other_messages")].isNull() && m_can_send_other_messages_isValid;

    m_can_add_web_page_previews_isValid = ::tele_rest::fromJsonValue(m_can_add_web_page_previews, json[QString("can_add_web_page_previews")]);
    m_can_add_web_page_previews_isSet = !json[QString("can_add_web_page_previews")].isNull() && m_can_add_web_page_previews_isValid;

    m_can_change_info_isValid = ::tele_rest::fromJsonValue(m_can_change_info, json[QString("can_change_info")]);
    m_can_change_info_isSet = !json[QString("can_change_info")].isNull() && m_can_change_info_isValid;

    m_can_invite_users_isValid = ::tele_rest::fromJsonValue(m_can_invite_users, json[QString("can_invite_users")]);
    m_can_invite_users_isSet = !json[QString("can_invite_users")].isNull() && m_can_invite_users_isValid;

    m_can_pin_messages_isValid = ::tele_rest::fromJsonValue(m_can_pin_messages, json[QString("can_pin_messages")]);
    m_can_pin_messages_isSet = !json[QString("can_pin_messages")].isNull() && m_can_pin_messages_isValid;

    m_can_manage_topics_isValid = ::tele_rest::fromJsonValue(m_can_manage_topics, json[QString("can_manage_topics")]);
    m_can_manage_topics_isSet = !json[QString("can_manage_topics")].isNull() && m_can_manage_topics_isValid;

    m_until_date_isValid = ::tele_rest::fromJsonValue(m_until_date, json[QString("until_date")]);
    m_until_date_isSet = !json[QString("until_date")].isNull() && m_until_date_isValid;
}

QString OAIChatMemberRestricted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatMemberRestricted::asJsonObject() const {
    QJsonObject obj;
    if (m_status_isSet) {
        obj.insert(QString("status"), ::tele_rest::toJsonValue(m_status));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_is_member_isSet) {
        obj.insert(QString("is_member"), ::tele_rest::toJsonValue(m_is_member));
    }
    if (m_can_send_messages_isSet) {
        obj.insert(QString("can_send_messages"), ::tele_rest::toJsonValue(m_can_send_messages));
    }
    if (m_can_send_audios_isSet) {
        obj.insert(QString("can_send_audios"), ::tele_rest::toJsonValue(m_can_send_audios));
    }
    if (m_can_send_documents_isSet) {
        obj.insert(QString("can_send_documents"), ::tele_rest::toJsonValue(m_can_send_documents));
    }
    if (m_can_send_photos_isSet) {
        obj.insert(QString("can_send_photos"), ::tele_rest::toJsonValue(m_can_send_photos));
    }
    if (m_can_send_videos_isSet) {
        obj.insert(QString("can_send_videos"), ::tele_rest::toJsonValue(m_can_send_videos));
    }
    if (m_can_send_video_notes_isSet) {
        obj.insert(QString("can_send_video_notes"), ::tele_rest::toJsonValue(m_can_send_video_notes));
    }
    if (m_can_send_voice_notes_isSet) {
        obj.insert(QString("can_send_voice_notes"), ::tele_rest::toJsonValue(m_can_send_voice_notes));
    }
    if (m_can_send_polls_isSet) {
        obj.insert(QString("can_send_polls"), ::tele_rest::toJsonValue(m_can_send_polls));
    }
    if (m_can_send_other_messages_isSet) {
        obj.insert(QString("can_send_other_messages"), ::tele_rest::toJsonValue(m_can_send_other_messages));
    }
    if (m_can_add_web_page_previews_isSet) {
        obj.insert(QString("can_add_web_page_previews"), ::tele_rest::toJsonValue(m_can_add_web_page_previews));
    }
    if (m_can_change_info_isSet) {
        obj.insert(QString("can_change_info"), ::tele_rest::toJsonValue(m_can_change_info));
    }
    if (m_can_invite_users_isSet) {
        obj.insert(QString("can_invite_users"), ::tele_rest::toJsonValue(m_can_invite_users));
    }
    if (m_can_pin_messages_isSet) {
        obj.insert(QString("can_pin_messages"), ::tele_rest::toJsonValue(m_can_pin_messages));
    }
    if (m_can_manage_topics_isSet) {
        obj.insert(QString("can_manage_topics"), ::tele_rest::toJsonValue(m_can_manage_topics));
    }
    if (m_until_date_isSet) {
        obj.insert(QString("until_date"), ::tele_rest::toJsonValue(m_until_date));
    }
    return obj;
}

QString OAIChatMemberRestricted::getStatus() const {
    return m_status;
}
void OAIChatMemberRestricted::setStatus(const QString &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIChatMemberRestricted::is_status_Set() const{
    return m_status_isSet;
}

bool OAIChatMemberRestricted::is_status_Valid() const{
    return m_status_isValid;
}

OAIUser OAIChatMemberRestricted::getUser() const {
    return m_user;
}
void OAIChatMemberRestricted::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIChatMemberRestricted::is_user_Set() const{
    return m_user_isSet;
}

bool OAIChatMemberRestricted::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIChatMemberRestricted::isIsMember() const {
    return m_is_member;
}
void OAIChatMemberRestricted::setIsMember(const bool &is_member) {
    m_is_member = is_member;
    m_is_member_isSet = true;
}

bool OAIChatMemberRestricted::is_is_member_Set() const{
    return m_is_member_isSet;
}

bool OAIChatMemberRestricted::is_is_member_Valid() const{
    return m_is_member_isValid;
}

bool OAIChatMemberRestricted::isCanSendMessages() const {
    return m_can_send_messages;
}
void OAIChatMemberRestricted::setCanSendMessages(const bool &can_send_messages) {
    m_can_send_messages = can_send_messages;
    m_can_send_messages_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_messages_Set() const{
    return m_can_send_messages_isSet;
}

bool OAIChatMemberRestricted::is_can_send_messages_Valid() const{
    return m_can_send_messages_isValid;
}

bool OAIChatMemberRestricted::isCanSendAudios() const {
    return m_can_send_audios;
}
void OAIChatMemberRestricted::setCanSendAudios(const bool &can_send_audios) {
    m_can_send_audios = can_send_audios;
    m_can_send_audios_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_audios_Set() const{
    return m_can_send_audios_isSet;
}

bool OAIChatMemberRestricted::is_can_send_audios_Valid() const{
    return m_can_send_audios_isValid;
}

bool OAIChatMemberRestricted::isCanSendDocuments() const {
    return m_can_send_documents;
}
void OAIChatMemberRestricted::setCanSendDocuments(const bool &can_send_documents) {
    m_can_send_documents = can_send_documents;
    m_can_send_documents_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_documents_Set() const{
    return m_can_send_documents_isSet;
}

bool OAIChatMemberRestricted::is_can_send_documents_Valid() const{
    return m_can_send_documents_isValid;
}

bool OAIChatMemberRestricted::isCanSendPhotos() const {
    return m_can_send_photos;
}
void OAIChatMemberRestricted::setCanSendPhotos(const bool &can_send_photos) {
    m_can_send_photos = can_send_photos;
    m_can_send_photos_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_photos_Set() const{
    return m_can_send_photos_isSet;
}

bool OAIChatMemberRestricted::is_can_send_photos_Valid() const{
    return m_can_send_photos_isValid;
}

bool OAIChatMemberRestricted::isCanSendVideos() const {
    return m_can_send_videos;
}
void OAIChatMemberRestricted::setCanSendVideos(const bool &can_send_videos) {
    m_can_send_videos = can_send_videos;
    m_can_send_videos_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_videos_Set() const{
    return m_can_send_videos_isSet;
}

bool OAIChatMemberRestricted::is_can_send_videos_Valid() const{
    return m_can_send_videos_isValid;
}

bool OAIChatMemberRestricted::isCanSendVideoNotes() const {
    return m_can_send_video_notes;
}
void OAIChatMemberRestricted::setCanSendVideoNotes(const bool &can_send_video_notes) {
    m_can_send_video_notes = can_send_video_notes;
    m_can_send_video_notes_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_video_notes_Set() const{
    return m_can_send_video_notes_isSet;
}

bool OAIChatMemberRestricted::is_can_send_video_notes_Valid() const{
    return m_can_send_video_notes_isValid;
}

bool OAIChatMemberRestricted::isCanSendVoiceNotes() const {
    return m_can_send_voice_notes;
}
void OAIChatMemberRestricted::setCanSendVoiceNotes(const bool &can_send_voice_notes) {
    m_can_send_voice_notes = can_send_voice_notes;
    m_can_send_voice_notes_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_voice_notes_Set() const{
    return m_can_send_voice_notes_isSet;
}

bool OAIChatMemberRestricted::is_can_send_voice_notes_Valid() const{
    return m_can_send_voice_notes_isValid;
}

bool OAIChatMemberRestricted::isCanSendPolls() const {
    return m_can_send_polls;
}
void OAIChatMemberRestricted::setCanSendPolls(const bool &can_send_polls) {
    m_can_send_polls = can_send_polls;
    m_can_send_polls_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_polls_Set() const{
    return m_can_send_polls_isSet;
}

bool OAIChatMemberRestricted::is_can_send_polls_Valid() const{
    return m_can_send_polls_isValid;
}

bool OAIChatMemberRestricted::isCanSendOtherMessages() const {
    return m_can_send_other_messages;
}
void OAIChatMemberRestricted::setCanSendOtherMessages(const bool &can_send_other_messages) {
    m_can_send_other_messages = can_send_other_messages;
    m_can_send_other_messages_isSet = true;
}

bool OAIChatMemberRestricted::is_can_send_other_messages_Set() const{
    return m_can_send_other_messages_isSet;
}

bool OAIChatMemberRestricted::is_can_send_other_messages_Valid() const{
    return m_can_send_other_messages_isValid;
}

bool OAIChatMemberRestricted::isCanAddWebPagePreviews() const {
    return m_can_add_web_page_previews;
}
void OAIChatMemberRestricted::setCanAddWebPagePreviews(const bool &can_add_web_page_previews) {
    m_can_add_web_page_previews = can_add_web_page_previews;
    m_can_add_web_page_previews_isSet = true;
}

bool OAIChatMemberRestricted::is_can_add_web_page_previews_Set() const{
    return m_can_add_web_page_previews_isSet;
}

bool OAIChatMemberRestricted::is_can_add_web_page_previews_Valid() const{
    return m_can_add_web_page_previews_isValid;
}

bool OAIChatMemberRestricted::isCanChangeInfo() const {
    return m_can_change_info;
}
void OAIChatMemberRestricted::setCanChangeInfo(const bool &can_change_info) {
    m_can_change_info = can_change_info;
    m_can_change_info_isSet = true;
}

bool OAIChatMemberRestricted::is_can_change_info_Set() const{
    return m_can_change_info_isSet;
}

bool OAIChatMemberRestricted::is_can_change_info_Valid() const{
    return m_can_change_info_isValid;
}

bool OAIChatMemberRestricted::isCanInviteUsers() const {
    return m_can_invite_users;
}
void OAIChatMemberRestricted::setCanInviteUsers(const bool &can_invite_users) {
    m_can_invite_users = can_invite_users;
    m_can_invite_users_isSet = true;
}

bool OAIChatMemberRestricted::is_can_invite_users_Set() const{
    return m_can_invite_users_isSet;
}

bool OAIChatMemberRestricted::is_can_invite_users_Valid() const{
    return m_can_invite_users_isValid;
}

bool OAIChatMemberRestricted::isCanPinMessages() const {
    return m_can_pin_messages;
}
void OAIChatMemberRestricted::setCanPinMessages(const bool &can_pin_messages) {
    m_can_pin_messages = can_pin_messages;
    m_can_pin_messages_isSet = true;
}

bool OAIChatMemberRestricted::is_can_pin_messages_Set() const{
    return m_can_pin_messages_isSet;
}

bool OAIChatMemberRestricted::is_can_pin_messages_Valid() const{
    return m_can_pin_messages_isValid;
}

bool OAIChatMemberRestricted::isCanManageTopics() const {
    return m_can_manage_topics;
}
void OAIChatMemberRestricted::setCanManageTopics(const bool &can_manage_topics) {
    m_can_manage_topics = can_manage_topics;
    m_can_manage_topics_isSet = true;
}

bool OAIChatMemberRestricted::is_can_manage_topics_Set() const{
    return m_can_manage_topics_isSet;
}

bool OAIChatMemberRestricted::is_can_manage_topics_Valid() const{
    return m_can_manage_topics_isValid;
}

qint32 OAIChatMemberRestricted::getUntilDate() const {
    return m_until_date;
}
void OAIChatMemberRestricted::setUntilDate(const qint32 &until_date) {
    m_until_date = until_date;
    m_until_date_isSet = true;
}

bool OAIChatMemberRestricted::is_until_date_Set() const{
    return m_until_date_isSet;
}

bool OAIChatMemberRestricted::is_until_date_Valid() const{
    return m_until_date_isValid;
}

bool OAIChatMemberRestricted::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_member_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_audios_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_documents_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_photos_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_videos_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_video_notes_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_voice_notes_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_polls_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_send_other_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_add_web_page_previews_isSet) {
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

        if (m_can_pin_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_manage_topics_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_until_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatMemberRestricted::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_status_isValid && m_user_isValid && m_is_member_isValid && m_can_send_messages_isValid && m_can_send_audios_isValid && m_can_send_documents_isValid && m_can_send_photos_isValid && m_can_send_videos_isValid && m_can_send_video_notes_isValid && m_can_send_voice_notes_isValid && m_can_send_polls_isValid && m_can_send_other_messages_isValid && m_can_add_web_page_previews_isValid && m_can_change_info_isValid && m_can_invite_users_isValid && m_can_pin_messages_isValid && m_can_manage_topics_isValid && m_until_date_isValid && true;
}

} // namespace tele_rest
