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
 * OAIBusinessBotRights.h
 *
 * Represents the rights of a business bot.
 */

#ifndef OAIBusinessBotRights_H
#define OAIBusinessBotRights_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIBusinessBotRights : public OAIObject {
public:
    OAIBusinessBotRights();
    OAIBusinessBotRights(QString json);
    ~OAIBusinessBotRights() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isCanReply() const;
    void setCanReply(const bool &can_reply);
    bool is_can_reply_Set() const;
    bool is_can_reply_Valid() const;

    bool isCanReadMessages() const;
    void setCanReadMessages(const bool &can_read_messages);
    bool is_can_read_messages_Set() const;
    bool is_can_read_messages_Valid() const;

    bool isCanDeleteOutgoingMessages() const;
    void setCanDeleteOutgoingMessages(const bool &can_delete_outgoing_messages);
    bool is_can_delete_outgoing_messages_Set() const;
    bool is_can_delete_outgoing_messages_Valid() const;

    bool isCanDeleteAllMessages() const;
    void setCanDeleteAllMessages(const bool &can_delete_all_messages);
    bool is_can_delete_all_messages_Set() const;
    bool is_can_delete_all_messages_Valid() const;

    bool isCanEditName() const;
    void setCanEditName(const bool &can_edit_name);
    bool is_can_edit_name_Set() const;
    bool is_can_edit_name_Valid() const;

    bool isCanEditBio() const;
    void setCanEditBio(const bool &can_edit_bio);
    bool is_can_edit_bio_Set() const;
    bool is_can_edit_bio_Valid() const;

    bool isCanEditProfilePhoto() const;
    void setCanEditProfilePhoto(const bool &can_edit_profile_photo);
    bool is_can_edit_profile_photo_Set() const;
    bool is_can_edit_profile_photo_Valid() const;

    bool isCanEditUsername() const;
    void setCanEditUsername(const bool &can_edit_username);
    bool is_can_edit_username_Set() const;
    bool is_can_edit_username_Valid() const;

    bool isCanChangeGiftSettings() const;
    void setCanChangeGiftSettings(const bool &can_change_gift_settings);
    bool is_can_change_gift_settings_Set() const;
    bool is_can_change_gift_settings_Valid() const;

    bool isCanViewGiftsAndStars() const;
    void setCanViewGiftsAndStars(const bool &can_view_gifts_and_stars);
    bool is_can_view_gifts_and_stars_Set() const;
    bool is_can_view_gifts_and_stars_Valid() const;

    bool isCanConvertGiftsToStars() const;
    void setCanConvertGiftsToStars(const bool &can_convert_gifts_to_stars);
    bool is_can_convert_gifts_to_stars_Set() const;
    bool is_can_convert_gifts_to_stars_Valid() const;

    bool isCanTransferAndUpgradeGifts() const;
    void setCanTransferAndUpgradeGifts(const bool &can_transfer_and_upgrade_gifts);
    bool is_can_transfer_and_upgrade_gifts_Set() const;
    bool is_can_transfer_and_upgrade_gifts_Valid() const;

    bool isCanTransferStars() const;
    void setCanTransferStars(const bool &can_transfer_stars);
    bool is_can_transfer_stars_Set() const;
    bool is_can_transfer_stars_Valid() const;

    bool isCanManageStories() const;
    void setCanManageStories(const bool &can_manage_stories);
    bool is_can_manage_stories_Set() const;
    bool is_can_manage_stories_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_can_reply;
    bool m_can_reply_isSet;
    bool m_can_reply_isValid;

    bool m_can_read_messages;
    bool m_can_read_messages_isSet;
    bool m_can_read_messages_isValid;

    bool m_can_delete_outgoing_messages;
    bool m_can_delete_outgoing_messages_isSet;
    bool m_can_delete_outgoing_messages_isValid;

    bool m_can_delete_all_messages;
    bool m_can_delete_all_messages_isSet;
    bool m_can_delete_all_messages_isValid;

    bool m_can_edit_name;
    bool m_can_edit_name_isSet;
    bool m_can_edit_name_isValid;

    bool m_can_edit_bio;
    bool m_can_edit_bio_isSet;
    bool m_can_edit_bio_isValid;

    bool m_can_edit_profile_photo;
    bool m_can_edit_profile_photo_isSet;
    bool m_can_edit_profile_photo_isValid;

    bool m_can_edit_username;
    bool m_can_edit_username_isSet;
    bool m_can_edit_username_isValid;

    bool m_can_change_gift_settings;
    bool m_can_change_gift_settings_isSet;
    bool m_can_change_gift_settings_isValid;

    bool m_can_view_gifts_and_stars;
    bool m_can_view_gifts_and_stars_isSet;
    bool m_can_view_gifts_and_stars_isValid;

    bool m_can_convert_gifts_to_stars;
    bool m_can_convert_gifts_to_stars_isSet;
    bool m_can_convert_gifts_to_stars_isValid;

    bool m_can_transfer_and_upgrade_gifts;
    bool m_can_transfer_and_upgrade_gifts_isSet;
    bool m_can_transfer_and_upgrade_gifts_isValid;

    bool m_can_transfer_stars;
    bool m_can_transfer_stars_isSet;
    bool m_can_transfer_stars_isValid;

    bool m_can_manage_stories;
    bool m_can_manage_stories_isSet;
    bool m_can_manage_stories_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIBusinessBotRights)

#endif // OAIBusinessBotRights_H
