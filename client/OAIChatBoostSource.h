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

/*
 * OAIChatBoostSource.h
 *
 * This object describes the source of a chat boost. It can be one of  * [ChatBoostSourcePremium](https://core.telegram.org/bots/api/#chatboostsourcepremium) * [ChatBoostSourceGiftCode](https://core.telegram.org/bots/api/#chatboostsourcegiftcode) * [ChatBoostSourceGiveaway](https://core.telegram.org/bots/api/#chatboostsourcegiveaway)
 */

#ifndef OAIChatBoostSource_H
#define OAIChatBoostSource_H

#include <QJsonObject>

#include "OAIChatBoostSourceGiftCode.h"
#include "OAIChatBoostSourceGiveaway.h"
#include "OAIChatBoostSourcePremium.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;

class OAIChatBoostSource : public OAIObject {
public:
    OAIChatBoostSource();
    OAIChatBoostSource(QString json);
    ~OAIChatBoostSource() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSource() const;
    void setSource(const QString &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    OAIUser getUser() const;
    void setUser(const OAIUser &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    qint32 getGiveawayMessageId() const;
    void setGiveawayMessageId(const qint32 &giveaway_message_id);
    bool is_giveaway_message_id_Set() const;
    bool is_giveaway_message_id_Valid() const;

    qint32 getPrizeStarCount() const;
    void setPrizeStarCount(const qint32 &prize_star_count);
    bool is_prize_star_count_Set() const;
    bool is_prize_star_count_Valid() const;

    bool isIsUnclaimed() const;
    void setIsUnclaimed(const bool &is_unclaimed);
    bool is_is_unclaimed_Set() const;
    bool is_is_unclaimed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_source;
    bool m_source_isSet;
    bool m_source_isValid;

    OAIUser m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    qint32 m_giveaway_message_id;
    bool m_giveaway_message_id_isSet;
    bool m_giveaway_message_id_isValid;

    qint32 m_prize_star_count;
    bool m_prize_star_count_isSet;
    bool m_prize_star_count_isValid;

    bool m_is_unclaimed;
    bool m_is_unclaimed_isSet;
    bool m_is_unclaimed_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIChatBoostSource)

#endif // OAIChatBoostSource_H
